/*
Summary: Program that demonstrates returning data from functions.
Author: Michael Collins
Date of Last Edit: 2020-01-30
Compiler: mingw (gcc)
*/

#include <stdio.h>

//Function Signatures
int sum(int, int);

int main(){
  int num1, num2, total;

printf("Enter two numbers\n");
scanf("%d",&num1);
scanf("%d",&num2);

//Printing final value.
total = sum(num1,num2);
printf("\nThe sume of %d and %d is %d",num1,num2,total);

return 0;
}//End Main.


//Implement Function Sum - Calculates the sum of the numbers.
int sum(int n1, int n2){
  int my_total = 0;

  my_total = n1 + n2;

  return my_total;
}//End Sum Function
