// *******************************************************************************************
/// <summary>
/// 
/// </summary>
/// <created>ʆϒʅ,10.09.2019</created>
/// <changed>ʆϒʅ,11.09.2019</changed>
// *******************************************************************************************

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
