/* 
Summary: To calculate the modulous of six combinations. 

Date last modified: 30.09.19
Author: Saul Burgess 
*/

#include <stdio.h>

int main()
{
	int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    
    v1 = 2 % 2;
    v2 = 3 % 2;
    v3 = 5 % 2;
    v4 = 7 % 2;
    v5 = 100 % 33;
    v6 = 100 % 7;
    
    printf("M1 is %d, M2 is %d, M3 is %d, M4 is %d, M5 is %d, M6 is %d", v1, v2, v3, v4, v5, v6);
    
	getchar();
	return 0;
}