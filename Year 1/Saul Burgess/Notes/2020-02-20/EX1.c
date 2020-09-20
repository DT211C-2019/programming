/*
Summary: Sitring Example
Author: Michael Collins
Date of Last Edit: 2020-02-20
Compiler: mingw (gcc)
*/

#include <stdio.h>

int main(){
  char input[21];

  printf("Enter a name\n");
  scanf("%s", input);

  printf("\nHello");
  puts(input);

  return 0;
}//End main
