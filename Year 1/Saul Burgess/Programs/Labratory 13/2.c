/*
Summary: A program that demonstrates function use by returning the average of three numbers
Author: Saul Burgess
Date of Last Edit: 2020-02-13
Compiler: mingw (gcc)
*/

#include <stdio.h>

#define INPUTNUM  3

//Prototypes
int Average (int input[]);


int main(){
  int input[INPUTNUM];
  int print;
  int i;

  //Asks user for a set of numbers
  for (i=0;i<INPUTNUM;++i){
    printf("Please enter a number\n");
    scanf("%d",&input[i]);
    getchar();
  }//End input for

  print = Average(input);
  printf("The average of the given numbers is %d",print);

}//End Main


//When given a set of numbers, will return an average of these numbers
int Average (int input[]){
  int total = 0;
  int output;
  int i;

  for (i=0;i<INPUTNUM;i++){
    total += input[i];
  }//End calc for

  output = total / INPUTNUM;
  return output;
}//End OddOrEven
