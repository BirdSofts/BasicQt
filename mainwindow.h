// *******************************************************************************************
/// <summary>
/// 
/// </summary>
/// <created>ʆϒʅ,10.09.2019</created>
/// <changed>ʆϒʅ,13.09.2019</changed>
// *******************************************************************************************

#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <qmainwindow.h>

#include "style.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
  //Q_OBJECT
  friend class AppStyle;
private:
  Ui::MainWindow* ui; // application UI
  AppStyle* style; // application theme

public:
  MainWindow ( QWidget* parent = nullptr );
  ~MainWindow ( void );
  void setStyle ( unsigned short ); // set the style
};


#endif // MAINWINDOW_H
