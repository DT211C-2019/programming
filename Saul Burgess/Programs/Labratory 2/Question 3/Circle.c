/* 
Summary: To calculate the area of a circle. 

Date last modified: 30.09.19
Author: Saul Burgess 
*/

#include <stdio.h>

int main()
{
	float pi = 3.14;
    float radius = 4.8;
    float area; 
    
    
    area = 2 * pi * radius;
    
    
	printf("The area of this circle is %fcm2.", area);

    
	getchar();
	return 0;
}