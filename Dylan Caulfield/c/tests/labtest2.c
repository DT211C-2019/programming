/*

    This program copies the contents of one array into a second array.
    It then iterates over the second array and replaces any spaces with underscores.
    Finally it outputs the modified second array to standard output.

    Dylan Caulfield
    02/12/2019
    
    OS: Ubuntu
    Compiler: gcc

*/

#include <stdio.h>

#define LENGTH 10

int main()
{

    char barack[] = {'Y', 'E', 'S', ' ', 'W', 'E', ' ', 'C', 'A', 'N'};
    char michelle[LENGTH];
    int i;


    /* Part 1 */


    // Copy each element of the barack array to michelle array
    for (i = 0; i < LENGTH; i++)
    {

        *(michelle + i) = *(barack + i);

    } // End for


    /* Part 2 */


    // Go through each character in michelle array
    for (i = 0; i < LENGTH; i++)
    {

        // If the current character is a space,
        // replace it with an underscore
        //
        if (*(michelle + i) == ' ')
        {
            *(michelle + i) = '_';
        }

    } // End for


    /* Part 3 */
    

    // Loop to print each character in the michelle array
    for (i = 0; i < LENGTH; i++)
    {

        printf("%c", *(michelle + i));

    } // End for

    printf("\n");

    return 0;

} // End program