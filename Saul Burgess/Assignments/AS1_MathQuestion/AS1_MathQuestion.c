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
  int q3lock, q2lock = 0;
  int i;
  int j;
  int function_select;
  int questionsnormal = maxquestions;

  char operators[4] = {'+','-','*','/'};
  int former[maxquestions];
  int latter[maxquestions];
  int answer[maxquestions];
  int Uanswer[maxquestions];


  while (program_main == 1){
    printf("Welcome to the MathQuiz program!\nPlease select one of the options:\n\n1. Edit Quiz Length\n2. Begin Quiz\n3. Display Results\n4. Terminate the program.\n");
    scanf("%d", &function_select);
    getchar();


    switch (function_select){

      case 1 : {
        printf("\nPlease enter the number of questions you wish to be asked. The maximum is %d\n", maxquestions);
        scanf(" %d", &questionsnormal);
        getchar();

        q2lock = 1;

        for(i=0;i>questionsnormal;i++){
          former[i] = rand() % 10 + 1;
          latter[i] = rand() % 10 + 1;
          answer[i] = latter[i] + former[i];
        }//End for.

        break;
      }//End Case 1.

      case 2 : {
        if(q2lock == 1){

          if(questionsnormal>maxquestions){
            questionsnormal = maxquestions;
            printf("You have entered either: A number greater then %d or a Character in option 1. Your selection has been defaulted to %d", maxquestions, maxquestions);
            sleep(4.5);
          }//End if.

          for(i=0;i>questionsnormal;i++){
            printf("\nThe Quiz will now start. You have three seconds to prepare");
            sleep(4.5);
            printf("\n%d + %d\n", former[i], latter[i]);
            scanf("%d", Uanswer[i]);
          }//End for.

        }//End If.
        else{
          printf("Invalid Input. Quiz cannot be started without entering the number of questions.");
          sleep(2.5);
        }//End Else.
        break;
      }//End Case 2.

      case 3 : {
        if(q3lock == 1){

        }//End If.
        else{
          printf("Invalid Input. Quiz must be played to display results.");
          sleep(2.5);
        }//End Else.
        break;
      }//End Case 3.

      case 4 : {
        printf("You have now terminated the program. Goodbye\n");
        sleep(2.5);
        program_main = 0;
        break;
      }//End Case 4.


      default :{
        printf("Invalid Operator Entered. Please select a valid operator from the screen above when prompted.\n");
        sleep(3.5);
      }//End Default.


    }//End Switch.

    system("cls");
  }//End While.


  return 0;
}//End Main.
