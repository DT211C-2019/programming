/*

    Program to the show user a maths quiz. The user
    can play multiple rounds of the quiz. They can 
    also view the results of the last round of the quiz 
    they played.

    Dylan Caulfield
    22/10/2019

    OS: Ubuntu
    Compiler: gcc

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_NUM_QS 5
#define Q_LENGTH 20
#define NUM_AVAIL_QS 10

// Struct to hold the questions, correct answers, user answers
// and the number of questions to be asked for a single round of the quiz
//
// This allows me to pass one 'Round' variable to my functions which
// makes the code cleaner
//
struct Round
{
    char questions[MAX_NUM_QS][Q_LENGTH];
    double correctAnswers[MAX_NUM_QS];
    double answersGiven[MAX_NUM_QS];
    short numQs;
};

// This allows me to declare variables as 'Round variableName' instead of 'struct Round variableName'
//
typedef struct Round Round;

// Function declarations so I can call them from inside main but actually
// write the functions below it
//
short showMenu(int, int);
void showRoundResults(Round, int);
Round newRound();
Round playRound(Round);
Round setRoundNumQs(Round);

int main()
{
    int roundNum = 1; // If this is 1 do not allow user to view results
    short menuSelection = 0;
    Round currentRound, lastRound;

    // Create the first round
    currentRound = newRound();

    // Clear the screen
    system("clear");

    // Run the program until menu option 4 is selected
    while (menuSelection != 4)
    {

        // Show the menu and pass the current round number and the number of
        // questions to be played in the next round. This takes input from the
        // user until they enter a number between 1-4 as there are 4 options
        // in the menu and returns this number
        //
        menuSelection = showMenu(roundNum, currentRound.numQs);

        // Perform a different action depending on which menu option was chosen
        switch (menuSelection)
        {

        case 1: // Set number of questions for next round chosen

            // Changes the number of questions that will be asked in the next
            // playthrough of the quiz
            //
            currentRound = setRoundNumQs(currentRound);

            break;

        case 2: // Start Round chosen

            // Check if number of rounds has not been set
            if (currentRound.numQs == 0)
            {

                // If the number of questions hasn't been set show the main menu again
                printf("You must set the number of questions for the next round!\n\n");
                break;
            }

            // Call the playRound function to play the next round of the quiz
            currentRound = playRound(currentRound);

            // Save the round just played as the last round
            lastRound = currentRound;

            // Create a new round and set it as the new curret round
            currentRound = newRound(5);

            // Increment the round number
            roundNum++;

            break;

        case 3: // Show results of last round chosen

            // If the round number is 1 a round has not been played yet
            // so show the user an error message and return to the menu
            //
            if (roundNum == 1)
            {

                system("clear");

                printf("You have not played a round yet!\n\n");

                break;
            }

            // Call the function to show the number of questions answered
            // correctly on the last round of the quiz passing the current
            // round number minus 1
            //
            showRoundResults(lastRound, roundNum - 1);

            break;

        case 4: // Exit program chosen

            // Do nothing and let program exit as the condition
            // in the loop is now false
            break;

        } // End switch

    } // End while

    return 0;
}

// Function to show the main menu of the application
//
// It takes the current round number and the current number of questions set for the next
// round of the quiz and returns the users selection which is an integer between 1-4
//
short showMenu(int roundNum, int numQs)
{

    short optionChosen = 0;
    char tmp[Q_LENGTH];

    // Present the options to the user until they select a valid one
    do
    {
        printf("Round #%d\n\n", roundNum);
        printf("Please enter an option from below:\n\n");
        printf("1. Set the number of questions for the next round of the quiz[%hd]\n", numQs);
        printf("2. Start the next round of the quiz\n");
        printf("3. Show the results from the last round of the quiz\n");
        printf("4. Exit the program\n\n");

        scanf(" %hd", &optionChosen);

        // Clear the standard input buffer of any characters or numbers
        while (getchar() != '\n')
        {
        }

        system("clear");

        // If the user has entered a number outside of 1-4
        if (optionChosen < 1 || optionChosen > 4)
        {
            printf("Invalid input. Enter a number between 1-4\n\n");
        }

    } while (optionChosen < 1 || optionChosen > 4);

    return optionChosen;
}

// Function to show the results of the previous round
//
// It takes in the Round struct and the round number and returns nothing
//
void showRoundResults(Round round, int roundNum)
{

    int correct = 0, incorrect = 0;
    int i;

    system("clear");

    printf("Results For Round #%d:\n\n", roundNum);

    // Loop to count the number of questions answered correctly
    for (i = 0; i < round.numQs; i++)
    {

        // If the answer given equals the correct answer
        if (round.answersGiven[i] == round.correctAnswers[i])
        {
            correct++; // Increment correct counter
        }
        else
        {
            incorrect++; // Increment incorrect counter
        }
    }

    // Use ternary operator to make question(s) singular if the user gets 1 correct or incorrect
    printf("(i)  You answered %d question%s correctly\n", correct, (correct == 1 ? "" : "s"));
    printf("(ii) You answered %d question%s incorrectly\n\n", incorrect, (incorrect == 1 ? "" : "s"));

    return;
}

// Function to create a new Round with random questions
//
// It doesn't take any parameters and returns a new Round
//
Round newRound()
{

    int random, i;
    char tempQuestion[Q_LENGTH];
    double tempAnswer;

    // Pool of questions that can be asked
    char questions[NUM_AVAIL_QS][Q_LENGTH] =
        {
            "1 + 7 + 9",
            "3 x 5",
            "50 x 2 + 4",
            "5 / 2",
            "23 - 6",
            "40 - 20 x 3 + 7",
            "27 + 13",
            "30 / 6",
            "34 - 42",
            "2 x 2 x 2"};

    double answers[NUM_AVAIL_QS] = {17, 15, 104, 2.5, 17, -13, 40, 5, -8, 8}; // Answers that correspond with questions

    Round round = {}; // Create a new round
    round.numQs = 0;  // Set the number of questions for the round to 0 as default. The user must set this to play

    // Set the seed for the random number generator to the current time
    srand(time(NULL));

    // Loop to add 5 random questions and their answers to the Round
    for (i = 0; i < MAX_NUM_QS; i++)
    {
        // New random number between 0 and the maximum number of rounds - i
        // Add i to offset against the questions already used at the beginning of the array due to swapping
        //
        random = (rand() % (NUM_AVAIL_QS - i)) + i;

        // Add the random question to the new Round struct
        //
        // strcpy is used to copy a character array to an exising array.
        //
        strcpy(round.questions[i], questions[random]);

        // Swap random question with question at i
        strcpy(tempQuestion, questions[i]);
        strcpy(questions[i], questions[random]);
        strcpy(questions[random], tempQuestion);

        // Add the random question's answer to the new Round's answers
        round.correctAnswers[i] = answers[random];

        // Swap random answers with answer at i
        tempAnswer = answers[i];
        answers[i] = answers[random];
        answers[random] = tempAnswer;

    } // End random questions and answers for loop

    return round;
}

// Function to let the user go through each question in the Round
//
// Takes in a Round and returns the Round with the answers the user has given
//
Round playRound(Round round)
{

    int i;

    system("clear");

    // Show the user each question and get their answer
    for (i = 0; i < round.numQs; i++)
    {

        // Print question with the maths in yellow using ANSI codes for clarity
        printf("Question #%d (\x1b[33m%s = ?\x1b[0m): ", i + 1, round.questions[i]);

        scanf(" %lf", &round.answersGiven[i]);

        // Clear standard input buffer of any characters or numbers
        while (getchar() != '\n')
        {
        }

        // Print the answer the user entered
        printf("\nYou entered %.1lf which is ", round.answersGiven[i]);

        // End the message differently if the answer given was correct or incorrect
        if (round.answersGiven[i] == round.correctAnswers[i])
        {
            printf("correct!\n\n");
        }
        else
        {
            printf("incorrect. The correct answer is %.1lf\n\n", round.correctAnswers[i]);
        }

    } //End for

    return round;
}

// Function that sets the number of questions for the next round of the quiz
//
// It takes in a Round and returns the updated Round
//
Round setRoundNumQs(Round round)
{

    int numQs = 0;

    system("clear");

    // Loop asking for the number of questions to be set until the user enters an answer between 1 and 5
    do
    {

        printf("How many questions should the next round of the quiz have? (1-%d): ", MAX_NUM_QS);

        scanf(" %d", &numQs);

        // Clear standard input buffer of any characters or numbers
        while (getchar() != '\n')
        {
        }

        system("clear");

        printf("Invalid input! Enter a number between 1-%d\n\n", MAX_NUM_QS);

    } while (numQs < 1 || numQs > MAX_NUM_QS); // End do while

    // Set the Round's number of questions to the entered number
    round.numQs = numQs;

    system("clear");

    return round;
}