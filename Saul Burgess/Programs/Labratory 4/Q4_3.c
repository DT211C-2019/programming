/*
Summary: To create a program that reads two integers and checks if the first integer is evenly divisable by the second.
Date of last Modification: 14.10.19
Author: Saul Burgess
*/

#include <stdio.h>
int main(){

  int input1;
  int input2;

  printf("Please enter in a whole number.\n");
  scanf("%d", &input1);

  printf("Please enter in a second whole number.\n");
  scanf("%d", &input2);

  if ((input1 % input2) == 0){ //If (input1 with modulous of input2) is equal to 0, then it is evenly divisable.
    printf("\nThis number is evenly divisable.");
  }// End if.

  else{
    printf("\nThis number is not evenly divisable.");
  }// End else.
}// End main.
