/*
Summary: A program that calculates the sum and average of INPUTAMOUNT numbers
Author: Saul Burgess
Date of Last Edit: 2020-02-06
Compiler: mingw (gcc)
*/

//Definitions
#define INPUTAMOUNT 3

//Libraries used
#include <stdio.h>

//Function prototypes
int sumtotal(int input[]);
int average_(int sum);


int main(){
  int i;
  int sum;
  int average;
  int input[INPUTAMOUNT];

  //Input for
  for(i=0;i<(INPUTAMOUNT);i++){
    printf("Please enter the %d number\n", i);
    scanf("%d", &input[i]);
    getchar();
  }//End input for

  sum = sumtotal(input);
  average = average_(sum);

  printf("The sum is %d, the average is %d",sum,average);

  return 0;
}//End Main


// Function that calculates the sum of the inputted numbers
int sumtotal(int input[]){
  int i;
  int sum = 0;

  for(i=0;i<INPUTAMOUNT;++i){
    sum += input[i];
  }//End for

  return sum;
}//End sum


//FUnction that calculatest he average of iputted numbers
int average_(int sum){
  int average;

  average = sum / INPUTAMOUNT;

  return average;
}//End average
