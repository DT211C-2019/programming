/*
Summary: To create a program that converts Euro to Dollar and the reverse.
Author: Saul Burgess
Date of Last Edit: 2020-02-20
Compiler: mingw (gcc)
*/

#include <stdio.h>

//Definitions
#define EXCHANGE_EURO 1.19
#define EXCHANGE_DOLLAR 0.84
#define INPUT 3

//Prototypes
float change_to_Euro(float input[]);
float change_to_Dollar(float input[]);


int main(){
  float input[INPUT+1];
  int selection;
  int i;
  int con = 1;

  //Global while, keeps the program running until told not to
  while (con == 1){

    //Mode select
    printf("Please enter your selection\n(1)-Euro\n(2)-Dollar\n(3)-Exit\n");
    scanf("%d",&selection);
    getchar();
    printf("\n");

    //Checks if you have opted to terminate the program
    if(selection == 3){
      printf("Goodbye!");
      return 0;
    }//Terminate program

    //Value input
    for(i=1;i<INPUT+1;i++){
      printf("Please enter number %d\n",i);
      scanf("%f",&input[i]);
    }//End input for

    if(selection == 1){
      printf("\nThe average Euro is %3.2f\n\n\n",change_to_Euro(input));
    }//End if
    else{
      printf("\nThe average Dollar is %3.2f\n\n\n",change_to_Dollar(input));
    }//End Else

  }//End global loop
}//End Main


//Function that converts Euro to Dollar, displays it, then returns the average of the input numbers to main
float change_to_Euro(float input[]){
  float output;
  float calc[INPUT+1];
  int i;

  //Conversion calc
  for(i=1;i<INPUT+1;i++){
    calc[i] = input[i]*EXCHANGE_EURO;
    output = output + calc[i];
    printf("\n\nEuro %3.2f, Dollar %3.2f\n",input[i],calc[i]);
  }//End calc for

  output = output / INPUT;
  return output;
}//End change_to_Euro


//Function that converts Dollar to Euro, displays it, then returns the average of the input numbers to main
float change_to_Dollar(float input[]){
  float output;
  float calc[INPUT+1];
  int i;

  //Conversion calc
  for(i=1;i<INPUT+1;i++){
    calc[i] = input[i]*EXCHANGE_DOLLAR;
    output = output + calc[i];
    printf("\n\nDollar %3.2f, Euro %3.2f\n",input[i],calc[i]);
  }//End calc for

  output = output / INPUT;
  return output;
}//End change_to_Euro
