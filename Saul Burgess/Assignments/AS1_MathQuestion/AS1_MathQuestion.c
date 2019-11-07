/*
Summary: To create a program that simulates a maths quiz.
Date of Last Edit: 23.10.19
Compiler: GCC (mingw)
OS: Windows 10
*/

//Libraries.
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

//Definitions.
#define maxquestions 5


int main(){
  int program_main = 1;
  int q3lock = 1;
  int i;
  int j;
  int function_select;

  char operators[4] = {'+','-','*','/'};
  int former[maxquestions];
  int latter[maxquestions];
  int answer[maxquestions];


  while (program_main == 1){
    printf("Welcome to the MathQuiz program!\nPlease select one of the options:\n\n1. Edit Quiz Length\n2. Begin Quiz\n3. Display Results\n4. Terminate the program.\n");
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
        printf("\n\n=============================================\nYou have now terminated the program. Goodbye\n=============================================");
        sleep(2.5);
        program_main = 0;
        break;
      }//End Case 4.


      default :{
        printf("\n\n=============================================================================================\nInvalid Operator Entered. Please select a valid operator from the screen above when prompted.\n=============================================================================================");
        sleep(3.5);
      }//End Default.


    }//End Switch.

    system("cls");
  }//End While.


  return 0;
}//End Main.
