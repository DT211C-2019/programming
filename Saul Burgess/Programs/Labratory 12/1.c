/*
Summary: A program that uses a function to print 10 stars on a single line
Author: Saul Burgess
Date of Last Edit: 2020-02-06
Compiler: mingw (gcc)
*/

//Definitions
#define AMOUNT 10

//Libraries used
#include <stdio.h>

//Function prototypes
void stars();


int main(){
  int i;
  for (i=0;i<10;i++){
    stars();
  }//End stars for.
}//End main


//Function that prints a single star.
void stars(){
  printf("*");
}//End Stars
