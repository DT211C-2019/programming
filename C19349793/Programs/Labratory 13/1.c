/*
Summary: A program that demonstrates function use by returning a boolean that states if a given number is odd or even
Author: Saul Burgess
Date of Last Edit: 2020-02-13
Compiler: mingw (gcc)
*/

#include <stdio.h>

//Prototypes
int OddOrEven (int input);


int main(){
  int input;

  //Asks user for number
  printf("Please enter a number\n");
  scanf("%d",&input);
  getchar();

  //Checks if the return value is odd or even, and returns the answer
  if (OddOrEven(input) == 1){
    printf("The number %d is even", input);
  }//End display if
  else {
    printf("The number %d is odd", input);
  }//End else

}//End Main


//When given a number, will return a boolean value of 0 or 1 repersenting odd or even (respectivly)
int OddOrEven (int input){
  int output;
  if (input % 2 == 0){
     output = 1;
  }//End calc if
  else {
    output = 0;
  }//End Else
  return output;
}//End OddOrEven
