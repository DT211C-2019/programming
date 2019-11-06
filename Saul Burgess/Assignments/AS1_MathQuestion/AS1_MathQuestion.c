/*
Summary: To create a program that simulates a maths quiz.
Date of Last Edit: 23.10.19
Compiler: GCC (mingw)
OS: Windows 10
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(){
  int program_main = 1;
  int function_select;


  while (program_main == 1){
    printf("Welcome to the MathQuiz program!\nPlease select one of the options:\n1. TEMP\n2. TEMP\n3. TEMP\n4. Terminate the program.");
    scanf("%1s", &function_select);


    switch (function_select){

      case '1' : {
        printf("You entered 1.");
        break;
      }//End Case 1.

      case '2' : {
        printf("You entered 2.");
        break;
      }//End Case 2.

      case '3' : {
        printf("You entered 3.");
        break;
      }//End Case 3.

      case '4' : {
        printf("You have now terminated the program. Goodbye.");
        sleep(1);
        program_main = 0;
        break;
      }//End Case 4.




    }//End Switch.

    system("cls");
  }//End While.


  return 0;
}//End Main.
