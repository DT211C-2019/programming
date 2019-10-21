/*
Summary: To Implement the fibanachi sequence in C program.
Compiler: GCC (mingw)
Date of Last Edit: 21.10.19
Author: Saul Burgess
*/

#include <stdio.h>
#include <conio.h>
int main(){


  int Usr_Selection = 0;
  int fibanachi;
  long calcB = 1;
  long calcA = 0;
  int i;
  long ans;

  while (Usr_Selection != 2){

    //Prompts the user for their selection.
    printf("The Fibonachi series program.\n\n1. Begins the program.\n2. Terminates the program.\n");
    scanf("%d", &Usr_Selection);


    //BEGIN fibonachi proc.
    if (Usr_Selection == 1){

      //Prompts the user for the number they wish to go up to.
      printf("You have selected 1. The program will now execute. Please state the term you wish to go up to\n");
      scanf("%d", &fibanachi);

      for (i=1; i<=fibanachi; ++i){

        //Calculation
        printf("%d  ", calcA);
        ans = calcA + calcB;
        calcA = calcB;
        calcB = ans;

      }//End Calc.

      calcB = 1, calcA = 0, i=1, ans=0;
      printf("\n\n\n\n\n");
    }//End fibanachi

  }//End PROGRAM if.

return 0;
}//End Main.
