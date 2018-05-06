#ifndef FILEOPERATION_H
#define FILEOPERATION_H
#include <QString>
#include <QFile>

class FileOperation
{
public:
    static bool CheckValid(const QString& path,QIODevice mode = QFile::ReadWrite);
    static bool LoadFileContext(const QString& path,QString &target);
    static bool StoreContextToFile(const QString& path);

private:
    FileOperation(){}
};

#endif // FILEOPERATION_H
