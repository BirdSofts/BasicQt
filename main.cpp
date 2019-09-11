// *******************************************************************************************
/// <summary>
/// 
/// </summary>
/// <created>ʆϒʅ,10.09.2019</created>
/// <changed>ʆϒʅ,11.09.2019</changed>
// *******************************************************************************************


#include <QApplication>

#include "mainwindow.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
