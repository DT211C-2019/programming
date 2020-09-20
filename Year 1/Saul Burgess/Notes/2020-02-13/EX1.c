/*
Summary: Program that demonstrates extern variables
Author: Michael Collins
Date of Last Edit: 2020-02-13
Compiler: mingw (gcc)
*/

#include <stdio.h>

//Prototypes
void fxn();


int main(){
  printf("Inside main\n");
  fxn();
  return 0;
}//End main


void fxn(){
  /*
  Btw, in the class code example the below is "extern int num = 0",
  this refused to compile on my machine. See workaround below.
  */

  extern int num;
  num = 0;
  printf("\n inside fxn");
  num++;
  printf("\nnum is %d\n",num);
}//End fxn
