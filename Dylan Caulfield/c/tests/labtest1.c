/*

    Program to show the user the numbers 
    of the Fibonacci series up to a limit they enter

    Dylan Caulfield
    21/10/2019
    
    OS: Ubuntu
    Compiler: gcc

*/

#include <stdio.h>

int main()
{

    int numTerms;
    int selection = 0;
    long previous = 0, current = 0, next;

    // Run program continously, user will break loop
    while (1)
    {

        // Reset the number of terms to be displayed
        numTerms = -1;

        // Reset the fibonacci numbers
        previous = 0;
        current = 1;

        // Ask for the number of terms to be shown until they enter a number
        // greater than or equal to 0
        do
        {

            printf("\nEnter the number of Fibonacci terms you want to display: ");
            scanf(" %d", &numTerms);

        } while (numTerms < 0);

        printf("\n"); // Newline for clarity

        // Print the series until the entered number of terms
        for (int i = 0; i < numTerms; i++)
        {

            printf("%ld", previous);

            next = previous + current;
            previous = current;
            current = next;

            // Show comma on all but last
            if (i != numTerms - 1)
            {
                printf(",");
            }
        } // End Fibonacci loop

        // Show the user the options until they enter 1 or 2
        while (1)
        {

            // Decide whether to end the program or show the Fibonacci numbers
            printf("\n\nEnter 1 or 2:\n");
            printf("\t1: Run the program again\n");
            printf("\t2: End the program\n\n");

            scanf(" %d", &selection);

            // The user wants to run the program again so break the menu loop
            if (selection == 1)
            {
                break;
            }

            // The user has chosen to exit the program so return
            if (selection == 2)
            {
                return 0;
            }

        } // End menu loop

    } // End program loop

    return 0;
}