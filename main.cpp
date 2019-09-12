// *******************************************************************************************
/// <summary>
/// 
/// </summary>
/// <created>ʆϒʅ,10.09.2019</created>
/// <changed>ʆϒʅ,13.09.2019</changed>
// *******************************************************************************************


#include <qapplication.h>
#include <qpushbutton.h>

#include "mainwindow.h"


int main ( int argc, char* argv [] )
{
  QApplication a ( argc, argv );
  MainWindow w;
  w.show ();

  w.setStyle ( 1 );

  //QFont font ( "Courier" );
  //QPushButton button ( "Hello world!" );
  //button.setFont ( font );
  //button.setToolTip ( "The Hello from the button." );
  //button.show ();

  return a.exec ();
}
