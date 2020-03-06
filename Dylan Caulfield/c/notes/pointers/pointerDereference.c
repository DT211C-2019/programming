/*

    The deference operator is used to access the contents of
    a memory address which is stored in a pointer variable.

*/

#include <stdio.h>

void changeValue(int *ptr, int value)
{
    *ptr = value;

    return;
}

int main()
{

    int a = 53;


    // Stores the address location of an integer
    int *ptr = &a;
    int **ptrToPtr = &ptr;
    int ***ptr3 = &ptrToPtr;
    int ****ptr4 = &ptr3;
    int *****ptr5 = &ptr4;

    printf("Pointer: %p, Address Of Pointer: %p, Contents Of Pointer : %d\n", ptr, &ptr, *ptr);

    ***ptr3 = 3;

    printf("New value of a is %d\n", a);

    int x = 3;

    changeValue(&x, 63);

    printf("%d\n", x);

    return 0;
}