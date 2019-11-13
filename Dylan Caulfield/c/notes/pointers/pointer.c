/*
    Program to display the address of variables
*/

#include <stdio.h>

int main()
{

    int var1;
    char var2;

    var1 = 1;
    var2 = 'A';

    int a = 3 < 2;

    printf("%d\n", a);

    printf("var1 contains %d and is located at %p\n", var1, &( * (&var1) ) );
    printf("var2 contains %c and is located at %p\n", var2, &var2);

    return 0;

}