/*Program to simulate a maths quiz
with user input.

Author: Ethan Moran

Date: 5th November 2019

Compiler used: minGW with Atom.

*/
#include <stdio.h>
#include <stdlib.h>
float input1;//input for the menu screen
float input2;//input for how many questions the user would like
float q1, q2, q3, q4, q5;//all the questions that may be asked
float input3; //input for enter 2 to start quiz
int correct_answers = 0;
int incorrect_answers = 0;


int main() {
  do {  // a do while loop that loops the program if the input does not equal 4


    //loops this as long as the input is 1
    do {
      printf("\n1.Enter 1 to pick how many questions you want.Up to five\n");

      printf("2.Enter 2 to start the quiz.The quiz can be started with 2 only after your numbers have been chosen\n");
      
      printf("3.Enter 3 to get your results\n");

      printf("4. Enter 4 to end the program\n");

      scanf("%f", &input1); //takes the input of the menu screen
      getchar(); //this ensures the scanf does not take any character
      system("cls"); //clears screen to stop the looping of the getchar.

      if(input1 == 2)  //this checks if the input is 2 and prompts the user to put in questions before the quiz can start
      {
        printf("You must enter the amount of questions you want first\n");
      }


      //only starts the quiz when the user enters 1 and then 2 with how many questions they would like
      if(input1 == 1) //option 1 check
      {
        printf("Enter 2 to start the quiz\n"); //2 has to be entered to start the quiz
        scanf("%f", &input3);


        if (input3 == 2) //Option 2 check
        {
          printf("How many questions would you like?"); //the user can enter how many questions they would like
          scanf("%f", &input2);
          getchar();
          system("cls");

          if (input2 == 1) //runs when the amount of questions wanted is 1
          {
            printf("1+1 = "); //the first question
            scanf("%f", &q1);
            printf("The answer is 2.You entered %.f\n", q1);
          }


          else if (input2 == 2) //runs when the amount of questions wanted is 2
          {
            printf("1+1 = ");
            scanf("%f", &q1); //asks the first and second question when 2 is pressed
            printf("The answer is 2.You entered %.f\n", q1);

            printf("8/2 = ");
            scanf("%f", &q2);
            printf("The answer is 4.You entered %.f\n", q2);
          }


          else if (input2 == 3) //runs when the amount of questions wanted is 3
          {
            printf("1+1 = ");
            scanf("%f", &q1);
            printf("The answer is 2.You entered %.f\n", q1);

            printf("8/2 = ");
            scanf("%f", &q2);
            printf("The answer is 4.You entered %.f\n", q2);

            printf("12-6 = ");
            scanf("%f", &q3);
            printf("The answer is 6.You entered %.f\n", q3);

          }


          else if (input2 == 4) //runs when the amount of questions wanted is 4
          {
            printf("1+1 = ");
            scanf("%f", &q1);
            printf("\nThe answer is 2.You entered %.f\n", q1);

            printf("8/2 = ");
            scanf("%f", &q2);
            printf("\nThe answer is 4.You entered %.f\n", q2);

            printf("12-6 = ");
            scanf("%f", &q3);
            printf("\nThe answer is 6.You entered %.f\n", q3);

            printf("4+4 = ");
            scanf("%f", &q4);
            printf("The answer is 8.You entered %.f\n", q4);

          }


          else if (input2 == 5) //runs when the amount of questions wanted is 5
          {
            printf("1+1 = ");
            scanf("%f", &q1);
            printf("The answer is 2.You entered %.f\n", q1);

            printf("8/2 = ");
            scanf("%f", &q2);
            printf("The answer is 4.You entered %.f\n", q2);

            printf("12-6 = ");
            scanf("%f", &q3);
            printf("The answer is 6.You entered %.f\n", q3);

            printf("4+4 = ");
            scanf("%f", &q4);
            printf("The answer is 8.You entered %.f\n", q4);

            printf("5*2 = ");
            scanf("%f", &q5);
            printf("The answer is 10. You entered %.f\n", q5);

          }

        }
      }



      //the code below checks that 3 has been pressed and that 2 to start the quiz has also been pressed.This ensures the quiz has actually been taken.
      if (input1 == 3 && input3 == 2) //option 3 check
      {
        //all the code below checks to see if the right or wrong answer has been inputted


        if(q1 == 2)
        {
          printf("\nQ1 is right\n" );
          correct_answers++;
        }

        else if(q1 != 2)
        {
          printf("\nQ1 is wrong.The answer was 2 you entered %.f\n", q1);
          incorrect_answers++;
        }


        if(input2 >= 2) //this ensures that the code below only executes if the amount of questions equals 2 or over
        {

          if (q2 == 4) //this is the correct answer
          {
            printf("\nQ2 is right\n");
            correct_answers++;
          }

          else if (q2 != 4)
          {
            printf("\nQ2 is wrong.The answer was 4 you entered %.f\n", q2);
            incorrect_answers++;
          }
        }


        if(input2 >= 3)  //this ensures that the code below only executes if the amount of questions equals 3 or over
        {

          if (q3 == 6) //this is the correct answer
          {
            printf("\nQ3 is right\n");
            correct_answers++;
          }

          else if (q3 != 4)
          {
            printf("\nQ3 is wrong.The answer was 6 you entered %.f\n", q3);
            incorrect_answers++;
          }
        }


        if(input2 >= 4)   //this ensures that the code below only executes if the amount of questions equals 4 or over
        {
          if (q4 == 8) //this is the correct answer
          {
            printf("\nQ4 is right\n");
            correct_answers++;
          }

          else if (q3 != 8)
          {
            printf("\nQ4 is wrong.The answer was 8 you entered %.f\n", q4);
            incorrect_answers++;
          }
        }


        if(input2 >= 5)  //this ensures that the code below only executes if the amount of questions equals 5 or over
        {
          if (q5 == 10)
          {
            printf("\nQ5 is right\n"); //this is the correct answer
            correct_answers++;
          }

          else if (q5 != 10)
          {
            printf("\nQ5 is wrong.The answer was 10 you entered %.f\n", q5);
            incorrect_answers++;
          }

        }


        printf("\nYou got %d correct answer(s)\n",correct_answers);
        printf("\nYou got %d incorrect answer(s)\n",incorrect_answers);

      }

    } while (input1 == 1);  //this ensures the loop only runs if 1 is pressed to ask how many numbers the user would like


  } while(input1 != 4);  //this only stops the program if the user enters 4(Option 4 check)
  printf("Program is ending..."); //this is a message before the program ends
  return 0;
}
