/*

    Lottery game that runs continuously with a menu.
    It has a number of actions:
    - Choose new Lotto numbers
    - Show the currently selected Lotto numbers
    - Sort the chosen Lotto numbers using the bubble sort algorithm
    - Compare the chosen Lotto numbers with winning Lotto numbers
    and show a different message depending on the number of correct numbers chosen
    - Show the frequency of the Lotto numbers that have been chosen since the
    program was ran
    - Exit the program

    Dylan Caulfield
    19/02/2020
    
    OS: Ubuntu
    Compiler: gcc

*/

#include <stdio.h>
#include <stdlib.h>

#define LOTTO_LENGTH 6
#define FREQ_LENGTH 42

// Function Prototypes
void bubbleSort(int *, int);
void printArray(int *, int);
void showChosenNumbers(int *);
void sortNumbers(int *);
void chooseLottoNumbers(int *);
void compareChosenNumbers(int *);
void showLottoFrequency(int *);
int arrayContains(int *, int, int);
int getMenuSelection(void);
int *getFrequency(int *);

// Main function
int main()
{

    int menuSelection;
    int chosenNumbers[LOTTO_LENGTH] = {};

    // Repeat program until user selects option 6
    do
    {

        // Show menu to user and get option selected
        menuSelection = getMenuSelection();

        // If the Lotto numbers haven't been chosen and option 2-5 is selected
        if (chosenNumbers[0] == 0 && (menuSelection >= 2 && menuSelection <= 5))
        {

            printf("\n\nYou need to choose the Lotto numbers first!\n\n");
            continue;
        }

        // Perform different action depending on menu selection
        switch (menuSelection)
        {
            case 1: // Choose numbers
            {

                chooseLottoNumbers(chosenNumbers);
                break;
            }
            case 2: // Show chosen numbers
            {

                showChosenNumbers(chosenNumbers);
                break;
            }
            case 3: // Sort chosen numbers
            {

                sortNumbers(chosenNumbers);
                break;
            }
            case 4: // Compare with winning numbers
            {

                compareChosenNumbers(chosenNumbers);
                break;
            }
            case 5: // Display frequency
            {

                showLottoFrequency(chosenNumbers);
                break;
            }
        } // End switch

    } while (menuSelection != 6); // Until option 6 is selected

    return 0;

} // End main()

// Implementation of bubble sort algorithm
//
void bubbleSort(int *array, int size)
{

    int swapped, i, temp;

    do
    {

        swapped = 0; // Reset swapped counter

        // Iterate through array up to size - 1
        for (i = 0; i < size - 1; i++)
        {

            // Compare if the current value is greater than the next
            if (*(array + i) > *(array + i + 1))
            {

                // Swap current value with next value
                temp = *(array + i);
                *(array + i) = *(array + i + 1);
                *(array + i + 1) = temp;

                // Increment swapped counter
                swapped++;
            }
        }

    } while (swapped != 0); // Until there is an iteration with no swaps

} // End bubbleSort()

// Function to check whether an array contains a value
//
int arrayContains(int *array, int size, int value)
{

    int i;

    // Loop through array to check if value parameter is in it
    for (i = 0; i < size; i++)
    {

        // If the current element is equal to the value paramter return 1
        if (*(array + i) == value)
        {
            return 1;
        }
    }

    return 0; // Number not found

} // End arrayContains()

// Function to take in new Lotto numbers and check for errors
//
void chooseLottoNumbers(int *array)
{

    int i, enteredNum, numInRange, numUsed;

    // Reset each element to 0
    for (i = 0; i < LOTTO_LENGTH; i++)
    {

        *(array + i) = 0;
    }

    // Loop to take in 6 numbers
    for (i = 0; i < LOTTO_LENGTH; i++)
    {

        // Repeat until a valid number that hasn't been chosen is entered
        do
        {

            printf("\nEnter #%d: ", i + 1);
            scanf(" %d", &enteredNum);
            while (getchar() != '\n') {} // Clear standard input buffer

            numInRange = enteredNum >= 1 && enteredNum <= 42;         // Check if number is between 1-42
            numUsed = arrayContains(array, LOTTO_LENGTH, enteredNum); // Check if number is already entered

            // If the number is not in the range 1-42
            if (!numInRange)
            {

                printf("\nPlease enter a number between 1-42.\n");
                continue;
            }

            // If the number has already been chosen
            if (numUsed)
            {

                printf("\nThis number has already been entered. Please enter another number.\n");
            }

        } while (!numInRange || numUsed); // Until the number is in range and not already chosen

        // Add valid number to array
        *(array + i) = enteredNum;
    }

    // Update frequency of the chosen numbers
    getFrequency(array);

    printf("\n");

} // End chooseLottoNumbers()

// Function to compare the entered numbers with the winning numbers
// and to display the appropriate message to the user
//
void compareChosenNumbers(int *array)
{

    int i, matched = 0;
    int winningNumbers[LOTTO_LENGTH] = {1, 3, 5, 7, 9, 11};

    // Loop through the winning numbers
    for (i = 0; i < LOTTO_LENGTH; i++)
    {

        // If the winning number is in the chosen number array
        if (arrayContains(array, LOTTO_LENGTH, *(winningNumbers + i)))
        {
            matched++;
        }

    } // End for

    printf("You have %d winning number%c\n\n", matched, matched == 1 ? ' ' : 's');

    // Show different message depending on number of winning numbers
    switch (matched)
    {
        case 3:
        {

            printf("Congratulations! You have won a Cinema Pass\n\n");
            break;
        }

        case 4:
        {

            printf("Congratulations! You have won a Weekend Away\n\n");
            break;
        }

        case 5:
        {

            printf("Congratulations! You have won a New Car\n\n");
            break;
        }

        case 6:
        {

            printf("Congratulations! You have won the Jackpot\n\n");
            break;
        }

        default: // Less than 3
        {

            printf("Better luck next time!\n\n");
            break;
        }

    } // End Switch

} // End compareChosenNumbers()

// Function to display a menu to user and return their selection
//
int getMenuSelection()
{

    int selection, inRange;

    // Show menu until a valid option is chosen
    do
    {

        printf("------ Menu ------\n");
        printf("1. Choose numbers for Lotto\n");
        printf("2. Show chosen Lotto numbers\n");
        printf("3. Sort chosen Lotto numbers\n");
        printf("4. Compare chosen Lotto numbers with winning numbers\n");
        printf("5. Display frequency of chosen numbers\n");
        printf("6. End Program\n\n");
        printf("Enter Selection: ");

        scanf(" %d", &selection);
        while (getchar() != '\n') {} // Clear standard input buffer

        inRange = selection >= 1 && selection <= 6;

        // If the selection is not between 1-6
        if (!inRange)
        {
            printf("\nPlease enter a number between 1-6.\n");
        }

    } while (!inRange);

    system("clear");

    return selection;

} // End getMenuSelection()

// Function to print out the elements of an array in a comma separated list
//
void printArray(int *array, int size)
{

    int i;

    printf("[");

    // Loop through array up to size parameter
    for (i = 0; i < size; i++)
    {

        printf("%d", *(array + i));

        // Add comma and space for every element except last
        if (i != size - 1)
        {
            printf(", ");
        }
    }

    printf("]");

} // End printArray()

// Function to show the Lotto numbers that have been chosen
//
void showChosenNumbers(int *array)
{

    printf("The numbers you have chosen are:\n\n");

    // Print each chosen number in the array
    printArray(array, LOTTO_LENGTH);

    printf("\n\n");

} // End showChosenNumbers()

// Function to show to user the Lotto numbers are being sorted
// and to call bubble sort
//
void sortNumbers(int *array)
{

    printf("Sorting chosen Lotto numbers:\n\n");
    printArray(array, LOTTO_LENGTH);
    printf(" -> ");

    // Sort the array
    bubbleSort(array, LOTTO_LENGTH);

    // Print each element of the array
    printArray(array, LOTTO_LENGTH);

    printf("\n\n");

} // End sortNumbers()

// Function that returns a pointer to a static array
// containing the frequency of chosen numbers.
// 
// If a valid pointer is passed it will update the frequency
//
int *getFrequency(int *update)
{

    static int frequency[FREQ_LENGTH] = {};
    int i;

    // If a valid pointer is passed
    if (update != NULL)
    {

        // Each number in the update array
        for (i = 0; i < LOTTO_LENGTH; i++)
        {

            // Increment the frequency corresponding with the 
            // chosen number in the update 
            (*(frequency + *(update + i) - 1))++;
        }
    }

    return frequency;

} // End getFrequency()

// Function to show how many times the current Lotto numbers have been chosen
//
void showLottoFrequency(int *array)
{

    int i, f;

    // Get the frequency but don't pass an update
    int *frequency = getFrequency(NULL);

    // For each chosen number
    for (i = 0; i < LOTTO_LENGTH; i++)
    {

        // Get the frequency of the chosen number from the array
        f = *(frequency + *(array + i) - 1); // Extra variable for readability

        printf("%d has appeared %d time%c\n", *(array + i), f, f == 1 ? ' ' : 's');
    }

    printf("\n\n");

} // End showLottoFrequency()