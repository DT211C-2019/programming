/*
Summary: To create a program that generates a one dimensional array with pointer notation.
Author: Michael Collins
Date of Last Edit: 2019-11-19
Compiler: GCC (mingw)
OS: Windows 10
*/

#include <stdio.h>

#define SIZE 5

int main(){
  int numbers[SIZE];
  int i;

  //Enter data into an array.
  printf("Enter %d numbers\n", SIZE);


  for (i=0;i<SIZE;i++){
    //scanf("%d", &numbers[i]); //Subscript notation.
    scanf("%d", &*(numbers + i)); // Pointer notation.
  }//End input For.


  //Multiply each element by 10.
  for (i=0;i<SIZE;i++){
    *(numbers + i) = ( *(numbers + i) * 10 );
  }//End multiply for.


  //Display array contents.
  for (i=0;i<SIZE;i++){
    printf("%d\n", *(numbers+i));
  }//End display for.


  return 0;
}//End Main.
