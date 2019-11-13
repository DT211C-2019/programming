/*

    A pointer variable is a variable that stores a memory address of another variable.

    type *pointer_variable_name;

*/

#include <stdio.h>

int main()
{

    int a = 53;

    // Stores the address location of an integer
    int *ptr = &a;

    printf("Pointer: %p, Address Of Pointer: %p, Integer: %d\n", ptr, &ptr, *ptr);


    return 0;
}
