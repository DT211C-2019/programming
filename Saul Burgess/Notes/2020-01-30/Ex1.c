/*
Summary: Program that demonstrates parametres (arguments).
Author: Michael Collins
Date of Last Edit: 2020-01-30
Compiler: mingw (gcc)
*/

#include <stdio.h>

//Implement function "Stars"
void stars(int n1){
  int i;

  for(i=0;i<n1;i++){
    printf("*");
  }//End for.
}//End "Stars"

int main(){
  int number;

  printf("How many stars do you want to display?\n");
  scanf("%d", &number);

  //Call Stars
  stars(number);

  return 0;
}//End main
