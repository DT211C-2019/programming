/*
Summary: To create a program that distinguishes between odd and even numbers.
Date of last Modification: 14.10.19
Author: Saul Burgess
*/

#include <stdio.h>
int main(){

  int input;

  printf("Please enter in a whole number. This program will then state if it is even or odd.\n");
  scanf("%d", &input);

  if ((input % 2) == 0){ //If (input with modulous of 2) is equal to 0, then it is even. If not odd.
    printf("\nThis is an even number.");
  }// End if.

  else{
    printf("\nThis is an odd number");
  }// End else.
}// End main.
