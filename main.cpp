#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w; //main class
    w.setWindowTitle("Панасенко В.В.(КА07)"); //title
    w.show();

    return a.exec();
}
