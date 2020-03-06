/*

    Program that uses a function

*/

#include <stdio.h>

// Function signature
void stars(int);

int main()
{

    stars(50);

}

void stars(int nums)
{
    
    for (int i = 0; i < nums; i++)
    {
        printf("*");
    }
    

}