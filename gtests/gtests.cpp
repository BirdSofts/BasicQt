
// *******************************************************************************************
/// <summary>
/// gtests.cpp
/// QtIntroduction
/// created by Mehrdad Solimanimajd on 15.09.2019
/// </summary>
/// <created>ʆϒʅ, 15.09.2019</created>
/// <changed>ʆϒʅ, 11.02.2023</changed>
// *******************************************************************************************

#include "gtests.h"
#include "style.h"


TEST ( TestCaseName1, TestName1 )
{
  EXPECT_EQ ( 1, 1 );
  EXPECT_TRUE ( true );
}

TEST ( TestCaseName2, TestName2 )
{
  EXPECT_EQ ( 1, 2 );
  EXPECT_TRUE ( false );
}

//TEST ( TestCaseName, TestName )
//{
//  AppStyle test;
//  EXPECT_TRUE ( test.getLoaded () );
//}

//int main ( void )
//{
//  if (1 == 1)
//    return 0;
//  else
//    return -1;
//}
