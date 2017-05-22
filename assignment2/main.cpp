#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    QObject::connect(w.closeApp, SIGNAL(clicked(bool)), &a, SLOT(quit()));
    return a.exec();
}
