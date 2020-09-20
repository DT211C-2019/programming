/*
Summary: A program that calculates miles per litre with pre-determind data using pointer notation.
Author: Saul Burgess
Date of Last Edit: 2020-01-30
Compiler: mingw (gcc)
*/

#include <stdio.h>
#define SIZE 5

int main(){
  float litres[] = {11.5,11.21,12.6,12.6,12.4};
  float miles[] = {471.5,358.72,495.3,453.6,421.6};
  int mpl[5];
  int i;

  for (i=0;i<SIZE;i++){
    *(mpl+i) = *(miles+i) / *(litres+i);
  }//End proccessing loop.

  for (i=0;i<SIZE;i++){
    printf("%d", *(mpl+i));
  }//End print loop.

  for (i=0;i<SIZE;i++){}

}//End Main.
