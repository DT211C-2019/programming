/*
Summary: Program that uses pointer notation with arrays
Author: Michael Collins
Date of Last Edit: 2019-12-03
Compiler: mingw (gcc)
*/

#include <stdio.h>

#define SIZE 10

int main(){
  char barack[]={'Y','E','S',' ','W','E',' ','C','A','N'};
  char michelle[SIZE];
  int i;

  //Part 1.
  for(i=0;i<SIZE;i++){
    *(michelle+i) = *(barack+i);
  }//End for.

  //Part 2.
  for (i=0;i<SIZE;i++){
    if (*(michelle+i) == (' ')){
      *(michelle+i) = '_';
    }//End if.
  }//End for.

  //Part 3
  for(i=0;i<SIZE;i++){
    printf("%c", *(michelle+i));
  }//End For.

  return 0;
}//End Main
