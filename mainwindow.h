// *******************************************************************************************
/// <summary>
/// 
/// </summary>
/// <created>ʆϒʅ,10.09.2019</created>
/// <changed>ʆϒʅ,14.09.2019</changed>
// *******************************************************************************************

#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <qmainwindow.h>
#include <qmenu.h>
#include <qboxlayout.h>

#include "style.h"


//QT_BEGIN_NAMESPACE
//namespace Ui { class MainWindow; }
//QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
  friend class AppStyle;

  Q_OBJECT
private:

  // custom context menu implementation need:
  // reimplementation is needed to receive the context menu events for the created main window.
//#ifndef QT_NO_CONTEXTMENU
//  void contextMenuEvent ( QContextMenuEvent* ) override;
//#endif // QT_NO_CONTEXTMENU

  AppStyle* style; // application theme

  // private slots: to respond to the user actions on the menu entries,
  // most of which display the action's path in the central main window widget.
private slots:
  void themeOne ( void );

private:
  QMenu* menuFile; // menu widget
  QMenu* menuView;
  //QActionGroup* alignmentGroup; // to group the actions
  QAction* actionTheme; // abstract user interface action, insertable into widgets

  void createActions ( void );
  void createMenus ( void );

public:
  MainWindow ();
  ~MainWindow ( void );
  void setStyle ( unsigned char ); // set the style
};


#endif // MAINWINDOW_H
