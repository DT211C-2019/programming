/* 
Summary: To calculate a series of arithmetic operations. 

Date last modified: 30.09.19
Author: Saul Burgess 
*/

#include <stdio.h>

int main()
{
    int Add;
    int Sub;
    int Mult;
    float Div;
    int Mod;
    
    
    Add = 15 + 20;
    Sub = 15 - 10;
    Mult = 15 * 10;
    Div = 15 / 10;
    Mod = 15 % 3;
    
    printf("Add is %d, Sub is %d, Mult is %d, Div is %f, Mod is %d", Add, Sub, Mult, Div, Mod);
    
	getchar();
	return 0;
}