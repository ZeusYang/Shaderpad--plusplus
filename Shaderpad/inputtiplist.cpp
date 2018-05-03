#include "inputtiplist.h"
#include <QFile>
#include <QTextStream>
#include <QRegularExpression>
#include <QRegularExpressionMatch>

InputTipList::InputTipList(QWidget *parent)
    :QListWidget(parent)
{
    this->setVisible(false);
}

void InputTipList::loadTipWords(QString path)
{
    QFile file(path);
    file.open(QFile::ReadOnly);
    QTextStream in(&file);
    QString tmp;
    while(!(tmp = in.readLine()).isNull()){
        tmp = tmp.trimmed();
        tipWords.push_back(tmp);
    }
    file.close();
}

void InputTipList::selectShowWords(QString target)
{
    QRegularExpression reg;
    this->clear();
    QString pattern;
    for(auto x = 0;x < target.size();++x){
        pattern.push_back(target.at(x));
        if(x != target.size()-1)pattern.push_back(tr("[a-zA-Z]*"));
    }
    for(auto &elem : tipWords){
        if(reg.globalMatch(pattern).hasNext()){
            this->addItem(elem);
        }
    }
    this->setVisible(true);
}
