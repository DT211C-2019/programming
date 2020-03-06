/*
Summary: To write a program that converts far to celc via the use of an array.
Date of last Modification: 04.11.19
Author: Saul Burgess
*/

//Libraries
#include <stdio.h>

//Definitions
#define ArrayLength 3

int main(){


  int Array1[ArrayLength];
  int Array2[ArrayLength];
  int i;


  //Read Loop.
  printf("Please state %d numbers\n", ArrayLength);
  for(i=0;i<ArrayLength;i++){
    scanf("%d",&Array1[i]);
  }//End Input For.


  //Copy Loop.
  for(i=0;i<ArrayLength;i++){
    Array2[i] = (Array1[i]-32)*(5.0/9.0);
  }//End Copy For.


  //Print Loop.
  for(i=0;i<ArrayLength;i++){
    printf("%d",Array2[i]);
  }//End Print For.


  return 0;
}//End Main.
