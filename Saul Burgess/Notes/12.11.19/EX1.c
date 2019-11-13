/*
Summary: To demonstrate pointers.
Author: Michael Collins
Date of Last Edit: 12.11.19
Compiler: MINGW (64)
OS: Windows 10
*/

#include <stdio.h>

int main(){

  int var1 = 1;
  char var2 = 'A';

  printf("var1 contains %d and is located at %p\n", var1, &var1);
  printf("var2 contains %c and is located at %p\n", var2, &var2);

  return 0;
}//End main.
