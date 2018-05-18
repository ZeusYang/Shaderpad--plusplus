#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    if(argc > 1){
        w.openFile(QObject::tr(argv[1]));
        //QMessageBox::information(&w,QObject::tr("文件"),argv[1]);
    }
    return a.exec();
}
