// *******************************************************************************************
/// <summary>
/// 
/// </summary>
/// <created>ʆϒʅ,10.09.2019</created>
/// <changed>ʆϒʅ,13.09.2019</changed>
// *******************************************************************************************


#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow ( QWidget* parent )
  : QMainWindow ( parent )
  , ui ( new Ui::MainWindow ), style ( nullptr )
{
  try
  {

    ui->setupUi ( this );

    style = new AppStyle;

    ui->centralwidget->setStyleSheet ( style->theme.form );
    ui->menubar->setStyleSheet ( style->theme.menu );
    ui->statusbar->setStyleSheet ( style->theme.status );

  }
  catch (const std::exception& ex)
  {

  }
}


MainWindow::~MainWindow ()
{
  delete style;
  delete ui;
}


void MainWindow::setStyle ( unsigned short index )
{

  style->set ( index );

  if (style->getLoaded ())
  {
    ui->centralwidget->setStyleSheet ( style->theme.form );
    ui->menubar->setStyleSheet ( style->theme.menu );
    ui->statusbar->setStyleSheet ( style->theme.status );
  }

};
