/*
Summary: A program that calculates, through use of a function, the highest number of three values
Author: Saul Burgess
Date of Last Edit: 2020-02-06
Compiler: mingw (gcc)
*/

//Definitions
#define INPUTAMOUNT 3

//Libraries used
#include <stdio.h>

//Function prototypes
void highestandlowest(int input[], int size);


int main(){
  int i;
  int input[INPUTAMOUNT];

  //Input for
  for(i=0;i<(INPUTAMOUNT);i++){
    printf("Please enter the %d number\n", i);
    scanf("%d", &input[i]);
    getchar();
  }//End input for

  highestandlowest(input, INPUTAMOUNT);
  return 0;
}//End Main


//Calculates the highest and lowest numbers of a given array, then returns them as an array.
void highestandlowest(int input[], int size){
  int i;
  int max;
  int min;

  for(i=0;i<(INPUTAMOUNT);i++){
    if (input[i]>max){
      max = input[i];
    }//End MAX if
    if (input[i]<min){
      min = input[i];
    }//End MIN if
  }//End for

  printf("Max is %d, Min is %d", max, min);
}//End highestandlowest
