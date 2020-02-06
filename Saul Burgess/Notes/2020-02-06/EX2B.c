/*
Summary: Program that demonstrates functions.
Author: Michael Collins
Date of Last Edit: 2020-02-06
Compiler: mingw (gcc)
*/

#include <stdio.h>

//Function prototype
void swap(int *ptr1, int *ptr2);

int main(){
  int num1=27;
  int num2=4;

  //Swap Numbers
  swap(&num1, &num2);

  printf("Numbers in ascending order are %d and %d",num1,num2);
  return 0;
}//End main

//Implement Swap
void swap(int *ptr1, int *ptr2){
  int tmp;
  tmp = *ptr1;
  *ptr1 = *ptr1;
  *ptr2 = tmp;
} //End swap
