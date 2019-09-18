// *******************************************************************************************
/// <summary>
/// 
/// </summary>
/// <created>ʆϒʅ,12.09.2019</created>
/// <changed>ʆϒʅ,18.09.2019</changed>
// *******************************************************************************************

#ifndef STYLE_H
#define STYLE_H


#include <string>
#include <exception>
#include <fstream>
#include <sstream>
#include <qstring.h>


enum Sphare { enumForm = 0, enumMenu, enumStatusBar };
struct Style
{
  QString form;
  QString menu;
  QString status;
};


class AppStyle
{
private:
  std::string paths [2]; // paths to application theme files
  unsigned short current; // current application theme index
  bool loaded; // true if loading was successful

  bool load ( void ); // theme files loader
public:
  Style theme; // current theme

  AppStyle ();
  //~AppStyle ( void );
  void setDefaults ( void ); // defaults
  void set ( unsigned char ); // set theme index
  const bool getLoaded ( void ); // load theme style-sheet file
};


#endif // STYLE_H
