/*      Program Description: This program simulates a simple mathematics quiz game
        Author: Abraham Izarra
        Start Date: 28 Oct 2019
        OS: MacOS Catalina
        Compiler: Xcode
*/


#include <stdio.h>
#include <stdlib.h> //random generator
#include <time.h> //used time for random generator
#include <unistd.h> //allows sleep code to work

#define QUESTIONS 9

int main()
{ //start main
    
    // num1, num2 used to store random numbers, question_3_counter used to stop the user from selecting 'Option 3' without starting the quiz first
    int num1, num2, question_3_counter = 0;
    // question_ammount used to store the number of questions the user wants, Num_Questions used to let "Option 1" work with "Option 2"
    int question_ammount = 5, Num_Questions = 0;
    //question is used to stored the answer of the question that was asked (2+2 = 4 {4 is stored}), answer is used to store the answer of the user
    int question, answer;
    //correct, incorrect used to store how many questions the user got right or wrong
    int correct = 0, incorrect = 0;
    //Counter is used to change the Question number eg Q1 to Q2
    int counter = 0;
    
    
    //Option is used to store the character that the user selects in the menu
    char Option;
    //array to store the questions as a string
    char *Question[QUESTIONS];
    char *Question_1 = " What is ";
    
    
    //this is the random number generator, uses time to let numbers change, uses casting as time is a long and i needed an int
    srand ((int) time (0) );
    
    Question[0] = Question_1;
    
    do
    { //start do loop (to display Menu at least once)
        
        sleep(4);
        printf ("\n\nThis is your menu choose an option\n");
        printf ("\n1. Enter the number of questions to be asked for this round of the quiz (maximum 5 questions) \n2. Start quiz \n3. Display the number of questions that were answered (i) correctly and (ii) incorrectly for this round \n4. Exit Program \n");
        
        //this %s reads only the first character inputted by the user
        scanf ("%s", & Option);
        
        switch (Option)
        { //start switch statement to enter which option of menu the user wants
        
            case '1':
            { //Asks how many questions user wants
                printf ("\nYou have selected '1' , Please enter number of questions (1 and 5) \n");
                
                do
                { //start do loop
                    scanf ("%d", & question_ammount);
                    
                    if (question_ammount < 1 || question_ammount > 5)
                    { //start if statement to stop the user from choosing a number less than 1 or greater than 5
                        printf ("\nError, Please enter a number of questions between 1 and 5 \n");
                        
                    } //end if statement
                    else
                    { //start else to display what the user has to do next
                        printf ("\nYou have entered %d \nNow please choose option '2' from main menu to start the quiz \n", question_ammount);
                        
                    } //end else
                    
                } //end do loop
                while ( ! (question_ammount == 1 || question_ammount == 2 || question_ammount == 3 || question_ammount == 4 || question_ammount == 5) );
                
                
                break;
            } //end case 1
            
            case '2':
            { //Start asking questions
                printf ("\nYou have selected '2' \nQuiz will begin Good luck :) \n");
                
                //resets correct, incorrect, Num_Questions and counter back to 0, also sets question_3_counter to 1 (allows option 3 to display)
                correct = 0;
                incorrect = 0;
                Num_Questions = 0;
                counter = 0;
                question_3_counter = 1;
                
                do
                { //start do while statement to repeat the questions until the number of times the user wanted (if user did not input any number is set to be 5)
                    
                    //this keeps the random numbers from being higher than 10
                    num1 = rand() % 10+1;
                    num2 = rand() % 10+1;
                    
                    counter = counter + 1;
                    
                    sleep (2);
                    printf ("\nQ%d. %s %d + %d \n",counter, *Question, num1, num2);
                    
                    scanf ("%d", & answer);
                    
                    question = num1 + num2;
                    
                    if (answer == question)
                    { //start if statement for correct answer
                        printf ("Correct \n");
                        
                        Num_Questions = Num_Questions + 1;
                        
                        correct = correct + 1;
                        
                        
                    } //end if
                    else
                    { //start else for incorrect answer
                        printf ("You entered: %d - Wrong, The correct answer: %d \n", answer, question);
                        
                        Num_Questions = Num_Questions + 1;
                        
                        incorrect = incorrect + 1;
                        
                    } //end else
                    
                    if (Num_Questions == question_ammount)
                    { //start IF statement when quiz is finished
                        printf ("\nYou have finished the quiz, Please select 'option 3' to see your incorrect and correct answers \n");
                        
                    } //end IF statement
                    
                } //end do
                while (! (Num_Questions == question_ammount) );
                
                
                break;
            } //end case 2
            
            case '3':
            { //start displaying how many correct and incorrect answers user got for this round
                
                if (question_3_counter == 1)
                { //start if statement to let the user access the correct, incorrect answers
                    printf ("\nYou have selected '3' \n(i) Your Correct answers were %d \n(ii) Your Incorrect answers were %d \n", correct, incorrect);
                    
                } //end if statement
                else
                { //start else to stop the user from choosing option 3 before starting the quiz
                    printf ("\nYou have to begin the quiz before selecting option 3 \n");
                    
                } //end else
                
                
                break;
            } //end case 3
                
            case '4':
            { //start case 4 for ending the program
                printf ("\nYou have selected '4' \nExiting program, Thanks for playing :) \n\n");
                
                
                break;
            } //end case 4
                
            default:
            { //start default for error checking
                printf ("\nError, Please enter a number between 1 and 4\n");
                
            } //end default
                
        } //end switch statement
        
    } //end do loop
    while (! (Option == '4') );
    
    
    return 0;
    
} //end main
