/*
Summary: Program that demonstrates functions.
Author: Michael Collins
Date of Last Edit: 2020-01-29
Compiler: mingw (gcc)
*/

#include <stdio.h>
#define NUMBER 5

//Implement function "Stars"
void stars(void){
  int i;
  for(i=0;i<NUMBER;i++){
    printf("*");
  }//End print for
}//End "Stars"

int main(){
  printf("Before function called\n");

  //Call "Stars"
  stars();

  printf("\nAfter function called");
  return 0;
}//End main
