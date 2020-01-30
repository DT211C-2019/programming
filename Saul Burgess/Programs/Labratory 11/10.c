/*
Summary: Replacing a given array's blanks with _ using pointers.
Author: Saul Burgess
Date of Last Edit: 2020-01-30
Compiler: mingw (gcc)
*/
#define SIZE 7
#include <stdio.h>

int main(){
  char chars[] = {'a',' ','b',' ','c',' ','d'};
  int i;

  for (i=0;i<SIZE;i++){
    if (*(chars+i) == (' ')){
      *(chars+i) = '_';
    }//End replacing if.
  }//End replacing for.

  for (i=0;i<SIZE;i++){
    printf("%c", *(chars+i));
  }//End Print For.

}//End main
