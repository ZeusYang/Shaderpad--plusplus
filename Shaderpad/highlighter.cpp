#include "highlighter.h"
#include <QFile>
#include <QRegularExpression>
#include <QStringList>
#include <QTextStream>

Highlighter::Highlighter(QTextDocument *parent = 0)
    : QSyntaxHighlighter(parent)
{
}

void Highlighter::highlightBlock(const QString &text){
    //遍历每个高亮规则
    for(auto &elem : highlightingRules){
        //直接全局匹配，返回迭代器
        QRegularExpressionMatchIterator matchIterator = elem.pattern.globalMatch(text);
        while (matchIterator.hasNext()) {
            QRegularExpressionMatch match = matchIterator.next();
            setFormat(match.capturedStart(), match.capturedLength(), elem.format);
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
        setFormat(startIndex, commentLength, multiLineCommentFormat);
        startIndex = text.indexOf(commentStartExpression, startIndex + commentLength);
    }
}

//模式文件规则
/*规则为 name{{ words }} 其中name是相应的种类，words是要匹配正则表达式模式，不同的words空格或换行隔开
 *words有如下种类：
 * type 类型词
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
    if(patterns.isEmpty())return;
    int index = 0, multiIndex = 0;
    QRegularExpression reg(tr("{{.*}}"));
    QRegularExpressionMatch match;
    for(auto x = 0;x < 8;++x){
        //多行注释需要额外处理
        if(patternWord[x] == tr("multiCom")){
            multiIndex = index;
            continue;
        }
        match = reg.match(patterns,index);
        QStringList tmp = match.capturedTexts();
        //分割
        std::string context = tmp.takeFirst().toStdString();
        std::stringstream str(context);
        //获取每个pattern
        while(str >> context){
            HighlightingRule record;
            record.pattern.setPattern(QString::fromStdString(context));
            record.format = patternFormat[x];
        }
        index = match.capturedEnd();
    }
    //对多行注释的模板处理
    match = reg.match(patterns,multiIndex);
    QStringList tmp = match.capturedTexts();
    std::string context = tmp.takeFirst().toStdString();
    std::stringstream str(context);
    //多行注释的起始符
    str >> context;
    commentStartExpression.setPattern(QString::fromStdString(context));
    //多行注释的终止符
    str >> context;
    commentEndExpression.setPattern(QString::fromStdString(context));
}

//主题文件规则
/*规则为 name: r g b 其中name是相应的种类，":"后面是颜色设置，分别代表红、绿、蓝三色
 * r与:有一个空格，rgb之间也有一个空格，每个元素是0-255
 *words有如下种类：
 * type 类型词
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
    //对文件内容解析，提取相应的词语
    if(patterns.isEmpty())return;
    int index = 0;
    for(auto x = 0;x < 8;++x){
        QString line = in.readLine();
        if(line.isNull())break;
        QStringList target = line.split(" ");
        patternFormat[x].setForeground(QColor(QString::number(target.at(1)),
                                              QString::number(target.at(2)),
                                              QString::number(target.at(3)),
                                           ));
    }
    file.close();
}

void Highlighter::loadPatternAndTheme(QString patternPath, QString themePath)
{
    loadThemeFile(themePath);
    loadPatternFile(patternPath);
}
