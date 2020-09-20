/* 
Summary: To calculate the sum of the numbers 1 to 5, and the average of the floats 1.0 to 2.0

Date last modified: 30.09.19
Author: Saul Burgess 
*/

#include <stdio.h>

int main()
{
	int sum;
    float average;
    
    
    sum = 1 + 2 + 3 + 4 + 5;
    average = 1.0 + 1.1 + 1.2 + 1.3 + 1.4 + 1.5 + 1.6 + 1.7 + 1.8 + 1.9 + 2.0;
	
    
	printf ("Sum contains %d, Average contains %f \n", sum, average);
    
    average = average / 11;
    
    printf ("Sum contains %d, Average contains %f after devide by 11", sum, average);
    
	getchar();
	return 0;
}