/*
Summary: Program to demonstrate memory in arrays.
Author: Michael Collins
Date of Last Edit: 2019-11-18
Compiler: MINGW (64)
OS: Windows 10
*/

#include <stdio.h>
#define size 5

int main(){
  int myarray[size] = {2,4,5,8,10};
  int i;

  for (i=0;i<size;i++){
    printf("\nElement %d contains %d", i, myarray[i]);
    printf("\nIt's Hex-Location is %p", &myarray[i]);
  }//End for.

  return 0;
}//End Main.
