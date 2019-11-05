/*
Summary: To write a program that reads, then displays a set of numbers. Then swaps some of them.
Date of last Modification: 04.11.19
Author: Saul Burgess
*/

//Libraries
#include <stdio.h>

//Definitions
#define ArrayLength 4

int main(){


  int Array1[ArrayLength];
  int Array2[ArrayLength]
  int i;


  //Read Loop.
  printf("Please state %d numbers\n", ArrayLength);
  for(i=0;i<ArrayLength;i++){
    scanf("%d",&Array1[i]);
  }//End Input For.


  //Print Loop.
  for(i=0;i<ArrayLength;i++){
    printf("%d",Array1[i]);
  }//End Print For.


  printf("\n\n");

  //Copy Loop.
  for(i=0;i<ArrayLength;i++){
    Array2[i] = Array1[i];

    Array1[1] = Array2[2];
    Array1[2] = Array2[1];
    Array1[3] = Array2[4];
    Array1[4] = Array2[3];
  }//End Copy For.


  //Print Loop.
  for(i=0;i<ArrayLength;i++){
    printf("%d",Array1[i]);
  }//End Print For.


  return 0;
}//End Main.
