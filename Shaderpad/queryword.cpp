#include "queryword.h"
#include <QFile>
#include <iostream>
#include <sstream>
#include <QDebug>
#include <QObject>

QueryWord::QueryWord()
{
}

void QueryWord::loadHeadFromFile(const QString &path)
{
    QFile file(path);
    file.open(QFile::ReadOnly);
    QString context = file.readAll();
    file.close();
    std::string record = context.toStdString();
    std::stringstream str(record);
    int index = 0;
    while((str >> record) && (index = record.find("{{")) != std::string::npos){
        record = record.substr(0,index);
        QString head = QString::fromStdString(record);
        match[head] = std::set<QString>();
        std::cout << record << ":";
        while((str>>record)&&record.find("}}") == std::string::npos){
            context = QString::fromStdString(record);
            match[head].insert(context);
        }
        //std::cout << "\n";
    }
}

QString QueryWord::queryTargetWord(const QString &target)
{
    //现在match中查找，如果没找到说明还没有相关文档，返回空
    bool found = false;
    QString fileHead = "";
    for(auto outer = match.begin();outer != match.end();++outer){
        for(auto inner = outer->second.begin();inner != outer->second.end();++inner){
            if((*inner) == target){
                fileHead = outer->first;
                found = true;
                break;
            }
        }
        if(found)break;
    }
    if(!found)return fileHead;
    fileHead = ":/highlighter/documents/" + fileHead + ".txt";
    QFile file(fileHead);
    file.open(QFile::ReadOnly);
    QString context = QObject::tr(file.readAll());
    file.close();
    int index = context.indexOf(target+"{{");
    int endIndex = context.indexOf("}}",index);
    return context.mid(index,endIndex-index+1);
}
