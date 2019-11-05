/*
Summary: To explain, and repersent multi dimesional arrays. (THIS IS A PURE EXAMPLE AND WILL NOT RUN)
Author: Michael Collins
Date of Last Edit: 05.11.19
Compiler/OS: Mingw(GCC)/Windows10
*/


//Libraries.
#include <stdio.h>

//Definitions.
#define ROW 4
#define COL 3


//Start Main Loop.
int main(){

  //This is how you enter in data to a multidimensional array - It's the same way as doing it with a single dimesional array.
  int values[ROW][COL] = {1,2,3,4,5,6,7,8,9,10,11,12};


  //This is a more human friendly way of writing the above. The formatting here is important.
  int values[ROW][COL] = {1,2,3,
                          4,5,6,
                          7,8,9,
                          10,11,12
                        };


  //This is how you make zero out an array, any array.
  int values[ROW][COL] = {0};

  return 0;
}//End main.
