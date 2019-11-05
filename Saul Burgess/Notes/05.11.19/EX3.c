/*
Summary: To explain, and repersent a 3D array. 
Author: Michael Collins
Date of Last Edit: 05.11.19
Compiler/OS: Mingw(GCC)/Windows10
*/


//Libraries.
#include <stdio.h>

//Definitions.
#define ROW 2
#define COL 2
#define 3D 2


//Start Main Loop.
int main(){
  int values[ROW][COL][3D];
  int i, j, k;


  //Enter data into array. (Same as any other array).
  for(i=0;i<ROW;i++){
    scanf("%d",&values[i][j][k]);
  }//End data entry for.


  return 0;
}//End main.
