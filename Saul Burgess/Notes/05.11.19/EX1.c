/*
Summary: To explain, and repersent multi dimesional arrays.
Author: Michael Collins
Date of Last Edit: 05.11.19
Compiler/OS: Mingw(GCC)/Windows10
*/


//Libraries.
#include <stdio.h>

//Definitions.
#define ROW 3
#define COL 3


//Start Main Loop.
int main(){
  int values[ROW][COL];
  int i, j;


  //Enter data into array. (Same as any other array).
  for(i=0;i<ROW;i++){
    scanf("%d",&values[i][j]);
  }//End data entry for.


  return 0;
}//End main.
