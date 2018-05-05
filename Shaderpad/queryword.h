#ifndef QUERYWORD_H
#define QUERYWORD_H
#include <algorithm>
#include <map>
#include <QString>
#include <set>
class QueryWord
{
public:
    QueryWord();

    void loadHeadFromFile(const QString& path);

    QString queryTargetWord(const QString& target);

private:
    std::map<QString,std::set<QString> >match;
};

#endif // QUERYWORD_H
