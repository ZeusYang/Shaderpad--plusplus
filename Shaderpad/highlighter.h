#ifndef HIGHLIGHTER_H
#define HIGHLIGHTER_H
#include <QSyntaxHighlighter>

//语法高亮器
class Highlighter : public QSyntaxHighlighter
{
public:
    Highlighter(QTextDocument *parent = 0);

    void loadPatternFile(QString path);//加载模式文件

    void loadThemeFile(QString path);//加载高亮主题文件

    void loadPatternAndTheme(QString patternPath,QString themePath);//加载主题和模式文件
protected:
    void highlightBlock(const QString &text) override;

private:
    struct HighlightingRule{//高亮规则
        QRegularExpression pattern;//正则表达式模板
        QTextCharFormat format;//响应的词语格式，这里主要是颜色和粗体
    };
    //多行注释需要额外的处理
    QRegularExpression commentStartExpression;
    QRegularExpression commentEndExpression;
    //规则
    std::vector<HighlightingRule> highlightingRules;
    QTextCharFormat patternFormat[8];
    const QString  patternWord[8] = {"type","modifier","operators","singleCom",
                                    "multiCom","qutation","function","buildin"};
    enum PatternWord{type=0,modifier=1,operators=2,singleCom=3,
                    multiCom=4,qutation=5,function=6,buildin=7};
    //模式文件规则
    /*规则为 name{words} 其中name是相应的种类，words是要匹配正则表达式模式，不同的words空格或换行隔开
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
     * */
};

#endif // HIGHLIGHTER_H
