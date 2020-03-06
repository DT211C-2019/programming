/*
Summary: A program that demonstrates function use by returning the average of three numbers
Author: Saul Burgess
Date of Last Edit: 2020-02-13
Compiler: mingw (gcc)
*/

#include <stdio.h>

#define INPUTNUM  3

//Prototypes
int HighestOf (int input[]);


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

  //Calls HighestOf then prints
  print = HighestOf(input);
  printf("The highest value of the given numbers is %d",print);

}//End Main


//When given a set of numbers, it will return the highest of these numbers
int HighestOf (int input[]){
  int Highest = 0;
  int i;

  for (i=0;i<INPUTNUM;i++){
    if (input[i] > Highest){
      Highest = input[i];
    }//End check highest if
  }//End calc for

  return Highest;
}//End OddOrEven
