/*
Summary: Program that inputs integer values into an array and the sum of array elements using pointers
Author: Saul Burgess
Date of Last Edit: 2020-01-30
Compiler: mingw (gcc)
*/

#include <stdio.h>

#define SIZE 5

int main(){
  int Array[5];
  int i;

  //Passes some random numbers into an array.
  for(i=0;i<SIZE;i++){
    *(Array+i) = i;
  }//End input array.

  //Prints the array that was passed.
  for(i=0;i<SIZE;i++){
    printf("%d", *(Array+i));
  }//End print array.

}//End Main
