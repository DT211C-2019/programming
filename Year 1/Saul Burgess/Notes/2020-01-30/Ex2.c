/*
Summary: Program that demonstrates multiple parametres (arguments).
Author: Michael Collins
Date of Last Edit: 2020-01-30
Compiler: mingw (gcc)
*/

#include <stdio.h>

//Implement function "Stars" - make sure a in-depth description is here.
void stars(int n1, char ch){
  int i;

  for(i=0;i<n1;i++){
    printf("%c",ch);
  }//End for.
}//End "Stars"

int main(){
  int number;
  char my_char;

  printf("How many times do you want to display?\n");
  scanf("%d", &number);
  getchar(); // Not neccessary, but for some reason the code didn't work without it
  printf("What character would you like to display?\n");
  scanf("%c", &my_char);

  //Call Stars
  stars(number, my_char);

  return 0;
}//End main
