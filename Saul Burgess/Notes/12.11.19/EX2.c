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
  int *ptr1;
  char *ptr2;

  ptr1 = &var1;
  ptr2 = &var2;

  printf("ptr1 contains %p, it's location is %p, it's hex is %x\n", ptr1, &ptr1, &ptr1);
  printf("ptr2 contains %p, it's location is %p, it's hex is %x\n", ptr2, &ptr2, &ptr2);

  return 0;
}//End main.
