/*
Summary: Program to demonstrate pointers display their first hex location.
Author: Michael Collins
Date of Last Edit: 2019-11-18
Compiler: MINGW (64)
OS: Windows 10
*/

#include <stdio.h>
#define size 5

int main(){
  int myarray[size];

  printf("my-array is %p and &my-array[0] is %p\n", myarray, &myarray[0]);

  //To demonstrate element 2 is the same location as element 1 + 1.
  printf("The second element of &my-array is %p\n", &myarray[1]);

  return 0;
}//End Main.
