/*
Summary: To create a program that simulates a maths quiz.
Date of Last Edit: 10/11/19
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
  //Sets the seed of the random generator to the output given by time.h
  srand(time(NULL));

  //Locks the program down, preventing segments from being triggered until the approriate time.
  char program_main = 'Y';
  int q2lock = 0;
  int q3lock = 0;

  //Limits for random numbers.
  int max_q=10;
  int max_char=4;

  int i = 0;
  int function_select, char_select, operator, qcounter, correct, incorrect;
  int questionsnormal = maxquestions;
  float latter, former, ans, Usrans;


  //Global while loop, will continue to loop the program until it is terminated by function 4.
  while (program_main == 'Y'){
    printf("Welcome to the MathQuiz program!\nPlease select one of the options:\n\n1. Edit Quiz Length\n2. Begin Quiz\n3. Display Results\n4. Terminate the program.\n");
    scanf("%d", &function_select);
    getchar();

    //Defaults rand() limits.
    former = latter = 0;
    ans = Usrans = 0;


    switch (function_select){

      //This allows the user to set the total number of questions, the program stop any numbers greater then maxquestions, defaulting them to maxquestions if that occurs.
      //NOTE: As the int is already defined, any chars entered will be caught by the getchar(). Meaning questionsnormal will be defaulted to maxquestions
      case 1 : {
        printf("\n\n===============================================================================================\n");
        printf("Please enter the number of questions you wish to be asked. The current maximum is %d\n", maxquestions);
        printf("Warning: If you select a character or a number greater then %d, the program will default to %d.\n", maxquestions, maxquestions);
        printf("===============================================================================================\n");
        scanf(" %d", &questionsnormal);
        getchar();

        if(questionsnormal>maxquestions){
          questionsnormal = maxquestions;
        }//End if.
        q2lock = 1;
        break;
      }//End Case 1.


      //This case governs the quiz section, it will randomly generate the former and latter, then randomly generate the operator.
      //It will then detect if it is correct or incorrect, and add them to the tally.
      case 2 : {

        //Defaults counters required for for loop.
        qcounter = 1;
        correct = incorrect = 0;

        //Prevents activation if case 1 is not triggered.
        if (q2lock == 1){

          //Allows case 3 to be triggered.
          q3lock = 1;

          for (i=1; i<=questionsnormal; i++){

            //Generates former and latter.
            former = rand()%max_q;
            latter = rand()%max_q;

            //Generates random operator.
            char_select = rand()%max_char;
            switch (char_select){

              case 1 : {
                operator = '*';
                ans = (former*latter);
                break;
              }//End *

              case 2 : {
                operator = '+';
                ans = (former+latter);
                break;
              }//End +

              case 3 : {
                operator = '-';
                ans = (former-latter);
                break;
              }//End -

              case 4 : {
                operator = '/';
                ans = (former/latter);
              }//End /
            }//End Switch.

            //prints the question, then requests an answer from user.
            printf("\n%d: %.2f %c %.2f\n", i, former, operator, latter);
            scanf(" %f", &Usrans);
            getchar();

            if (ans == Usrans){
              correct++;
              printf("You are correct!");
              sleep(1);
            }//End CORRECT if.

            if (ans != Usrans){
              incorrect++;
              printf("You are incorrect");
              sleep(1);
            }//End INCORRECT if.
            printf("\n\n");

          }//End for.
        }//End If.
        else {
          printf("=========================================================\n");
          printf("You must input a question limit before starting the quiz.\n");
          printf("=========================================================\n");
          sleep(2.5);
        }//End Else.
      }//End Case 2.


      //Case 3 displays the answer when requested by the user.
      case 3 : {
        //This statement prevents the case from being triggered if the quiz is not completed.
        if(q3lock == 1){
          printf("=============\n");
          printf("Correct: %d\n", correct);
          printf("Incorrect: %d\n", incorrect);
          printf("=============\n");
          sleep(2.5);

        }//End If.
        else{
          printf("======================================================\n");
          printf("Invalid Input. Quiz must be played to display results.\n");
          printf("======================================================\n");
          sleep(2.5);
        }//End Else.

        break;
      }//End Case 3.


      //Terminates the program when this option is selected by making the while loop false.
      case 4 : {
        printf("============================================\n");
        printf("You have now terminated the program. Goodbye\n");
        printf("============================================\n");
        sleep(2.5);
        program_main = 'N';
        break;
      }//End Case 4.

      //Catches any illegal intigers.
      default :{
        printf("=============================================================================================\n");
        printf("Invalid Operator Entered. Please select a valid operator from the screen above when prompted.\n");
        printf("=============================================================================================\n");
        sleep(2.5);
      }//End Default.

    }//End Switch.

    //Primairly for neateness, clears the screen on each loop.
    system("cls");
  }//End While.


  return 0;
}//End Main.
