// *******************************************************************************************
/// <summary>
/// 
/// </summary>
/// <created>ʆϒʅ,10.09.2019</created>
/// <changed>ʆϒʅ,12.09.2019</changed>
// *******************************************************************************************


#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow ( QWidget* parent )
  : QMainWindow ( parent )
  , ui ( new Ui::MainWindow )
{
  ui->setupUi ( this );
}

MainWindow::~MainWindow ()
{
  delete ui;
}
