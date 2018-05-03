#ifndef INPUTTIPLIST_H
#define INPUTTIPLIST_H
#include <QListWidget>

class InputTipList : public QListWidget
{
public:
    explicit InputTipList(QWidget *parent = nullptr);

    void loadTipWords(QString path);//加载提示词组

    void selectShowWords(QString target);//根据target选出匹配的tip单词

    void addTipWord(QString word){//加一个词
        tipWords.push_back(word);
    }

private:
    std::vector<QString> tipWords;
};

#endif // INPUTTIPLIST_H
