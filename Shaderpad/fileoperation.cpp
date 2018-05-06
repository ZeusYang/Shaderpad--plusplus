#include "fileoperation.h"

QString FileOperation::LoadFileContext(const QString &path)
{

}

bool FileOperation::CheckValid(const QString &path, QIODevice mode)
{
    QFile file(path);
    bool ret = file.open(mode);
    file.close();
    return ret;
}

bool FileOperation::StoreContextToFile(const QString &path)
{

}
