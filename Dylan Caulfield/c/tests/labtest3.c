/*

    - Program to convert between Euro and Dollar.
    - The user will choose which currency they want to convert.
    - They will then enter 3 amounts of their chosen currency.
    - These 3 amounts will be converted to the other currency
    and displayed on screen beside the original amount.
    - The average of the 3 amounts converted will also be displayed.

    Dylan Caulfield
    20/02/2020

    OS: Ubuntu
    Compiler: gcc

*/

#include <stdio.h>

#define LENGTH 3

// Function Prototypes
float change_to_Euro(float *);
float change_to_Dollar(float *);
int getMenuSelection(void);
void enterAmounts(float *);

// Main function
int main()
{

    int menuSelection;
    float amounts[LENGTH] = {};
    float average;

    // Run program until user decided to exit
    do
    {

        // Show menu to user and get selection
        menuSelection = getMenuSelection();

        // Perform different action depending on menu selection
        switch (menuSelection)
        {

            case 1: // Dollar to Euro
            {

                printf("\nPlease enter 3 Dollar amounts:\n\n");

                // Enter 3 amounts to array
                enterAmounts(amounts);

                // Convert Dollar amounts to Euro and get average
                average = change_to_Euro(amounts);

                printf("The average of the 3 converted amounts is: €%.2f\n\n", average);

                break;
            }

            case 2: // Euro to Dollar
            {

                printf("\nPlease enter 3 Euro amounts:\n\n");

                // Enter 3 amounts to array
                enterAmounts(amounts);

                // Convert Euro amounts to Dollar and get average
                average = change_to_Dollar(amounts);

                printf("The average of the 3 converted amounts is: $%.2f\n\n", average);

                break;
            }

        } // End switch

    } while (menuSelection != 3);

    return 0;

} // End main

// Function to convert the average of 3 dollar amounts to euro
float change_to_Euro(float *dollarArray)
{

    int i;
    float sum = 0;

    printf("Converting to Euro... \n\n");

    // Loop to add each amount to sum for average
    // and to print amount with converted amount
    for (i = 0; i < LENGTH; i++)
    {

        sum += *(dollarArray + i); // Add amount to sum for average

        printf("$%.2f -> €%.2f\n", *(dollarArray + i), *(dollarArray + i) * 0.84);
    }

    printf("\n");

    // Return the average of the 3 amounts converted to Euro
    return (sum / LENGTH) * 0.84;

} // End function

// Function to convert the average of 3 euro amounts to dollar
float change_to_Dollar(float *euroArray)
{

    int i;
    float sum = 0;

    printf("Converting to Dollar... \n\n");

    // Loop to add each amount to sum for average
    // and to print amount with converted amount
    for (i = 0; i < LENGTH; i++)
    {

        sum += *(euroArray + i); // Add amount to sum for average

        printf("€%.2f -> $%.2f\n", *(euroArray + i), *(euroArray + i) * 1.19);
    }

    printf("\n");

    // Return the average of the 3 amounts converted to Dollar
    return (sum / LENGTH) * 1.19;

} // End function

// Function to show user menu and return selection
int getMenuSelection()
{

    int selection;

    // Show menu to user and get selection until a number
    // between 1 and 3 is selected
    do
    {

        printf("------ Menu ------\n");
        printf("1. Convert Dollar to Euro\n");
        printf("2. Convert Euro to Dollar\n");
        printf("3. Exit Program\n\n");

        // Take in selection
        printf("Enter Selection: ");
        scanf(" %d", &selection);
        while (getchar() != '\n'); // Clear standard input buffer

        // If the selection isn't between 1 and 3 show error
        if (selection < 1 || selection > 3)
        {
            printf("\nPlease enter a number between 1-3\n\n");
        }

    } while (selection < 1 || selection > 3); // End do while

    return selection;

} // End function

// Function to take in 3 amounts
void enterAmounts(float *amounts)
{

    float entered;
    int i;

    // Loop to take in 3 amounts
    for (i = 0; i < LENGTH; i++)
    {

        // Take input until valid positive amount is entered
        do
        {

            printf("Enter amount #%d: ", i + 1);
            scanf(" %f", &entered);

            // If entered number is negative
            if (entered < 0)
            {

                printf("\nPlease enter a positive amount\n\n");
            }

        } while (entered < 0); // End do while

        // Add validated amount to array
        *(amounts + i) = entered;

    } // End for

    printf("\n");

} // End function