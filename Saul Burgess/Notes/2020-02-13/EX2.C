/*
Summary: Answer to lab 13 q 4
Author: Michael Collins
Date of Last Edit: 2020-02-13
Compiler: mingw (gcc)
*/

#include <stdio.h>

//Prototypes
char findchar(char c1,char c2,char c3);
int main(){
  char ch1, ch2, ch3;
  char common;

  //the getchars are not original to the example, but good practice
  printf("Enter any three characters\n");
  scanf("%c",&ch1);
  getchar();
  scanf("%c",&ch2);
  getchar();
  scanf("%c",&ch3);
  getchar();

  //check most common character
  common = findchar(ch1,ch2,ch3);

  printf("\nThe most common character is %c",common);
  return 0;
}//End main


char findchar(char c1,char c2,char c3){
  if((c1==c2)||(c1==c3)){
    return c1;
  }
  else{
    return c3;
  }
}
