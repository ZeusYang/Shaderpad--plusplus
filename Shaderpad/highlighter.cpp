#include "highlighter.h"
#include <QFile>
#include <QRegularExpression>
#include <QStringList>
#include <QTextStream>
#include <QDebug>
#include <sstream>

Highlighter::Highlighter(QTextDocument *parent)
    : QSyntaxHighlighter(parent)
{
}

void Highlighter::highlightBlock(const QString &text){
    //遍历每个高亮规则
    for(auto it = highlightingRules.begin();it != highlightingRules.end();++it){
        QRegularExpressionMatchIterator matchIterator = it->pattern.globalMatch(text);
        while (matchIterator.hasNext()) {
            QRegularExpressionMatch match = matchIterator.next();
            setFormat(match.capturedStart(), match.capturedLength(), it->format);
        }
    }
    setCurrentBlockState(0);
    //多行注释的匹配
    int startIndex = 0;
    if (previousBlockState() != 1)
        startIndex = text.indexOf(commentStartExpression);
    while (startIndex >= 0) {
        QRegularExpressionMatch match = commentEndExpression.match(text, startIndex);
        int endIndex = match.capturedStart();
        int commentLength = 0;
        //这里是对多行注释的某位符号还写上的情况
        if (endIndex == -1) {
            setCurrentBlockState(1);
            commentLength = text.length() - startIndex;
        } else {
            commentLength = endIndex - startIndex
                            + match.capturedLength();
        }
        setFormat(startIndex, commentLength, patternFormat[PatternWord::multiCom]);
        startIndex = text.indexOf(commentStartExpression, startIndex + commentLength);
    }
}

//模式文件规则
/*规则为 name{{ words }} 其中name是相应的种类，words是要匹配正则表达式模式，不同的words空格或换行隔开
 *words有如下种类：
 * type 类型词
 * preprocess 预处理宏
 * modifier 修饰词
 * operator 操作符
 * singleCom 单行注释
 * multiCom 多行注释
 * qutation 引号
 * function 函数名称
 * buildin 内建变量
 * 严格按照上面的顺序，且缺一不可，name和{紧挨着
 * {}不可以缺失，没有直接{}表示
 * words与{{ 和 }} 之间有至少一个空格
 * */
void Highlighter::loadPatternFile(QString path)
{
    QFile file(path);
    file.open(QFile::ReadOnly);
    QString patterns = file.readAll();
    file.close();
    //对文件内容解析，提取相应的词语
    int index = 0,from = 0,to = 0;
    for(auto x = 0;x < 8;++x){
        index = patterns.indexOf(patternWord[patternPriority[x]]);
        from = patterns.indexOf("{{",index);
        to = patterns.indexOf("}}",index);
        index = to;
        QString tmp = patterns.mid(from + 2,to - from - 2);
        std::string context = tmp.toStdString();
        std::stringstream str(context);//分割
        while(str >> context){//获取每个pattern
            HighlightingRule record;
            record.pattern = QRegularExpression(QString::fromStdString(context));
            record.format = patternFormat[patternPriority[x]];
            highlightingRules.push_back(record);
        }
    }
    //对多行注释的模板处理
    index = patterns.indexOf("multiCom",0);
    from = patterns.indexOf("{{",index);
    to = patterns.indexOf("}}",index);
    QString tmp = patterns.mid(from+2,to - from + 1);
    std::string context = tmp.toStdString();//分割
    std::stringstream str(context);
    str >> context;//多行注释的起始符
    commentStartExpression.setPattern(QString::fromStdString(context));
    str >> context;//多行注释的终止符
    commentEndExpression.setPattern(QString::fromStdString(context));
}

//主题文件规则
/*规则为 name: r g b 其中name是相应的种类，":"后面是颜色设置，分别代表红、绿、蓝三色
 * r与:有一个空格，rgb之间也有一个空格，每个元素是0-255
 *words有如下种类：
 * type 类型词
 * preprocess 预处理宏
 * modifier 修饰词
 * operator 操作符
 * singleCom 单行注释
 * multiCom 多行注释
 * qutation 引号
 * function 函数名称
 * buildin 内建变量
 * 严格按照上面的顺序，且缺一不可，name和:紧挨着
 * 每一个word占一行，相邻word没有空行
 * */

void Highlighter::loadThemeFile(QString path)
{//从文件中加载高亮颜色主题
    QFile file(path);
    file.open(QFile::ReadOnly);
    QTextStream in(&file);
    for(auto x = 0;x < 9;++x){
        QString line = in.readLine();
        if(line.isNull())break;
        QStringList target = line.split(" ");
        patternFormat[x].setForeground(QColor(target.at(1).toInt(),
                                              target.at(2).toInt(),
                                              target.at(3).toInt()
                                           ));
    }
    file.close();
}

void Highlighter::loadPatternAndTheme(QString patternPath, QString themePath)
{
    loadThemeFile(themePath);
    loadPatternFile(patternPath);
}
