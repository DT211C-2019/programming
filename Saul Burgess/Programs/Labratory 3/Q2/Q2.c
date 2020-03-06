/* 
Summary: To enter in three floats, display the first to 4 dec places, the second to 3 dec places
and the 3rd to NO decimal places. All seperate lines. (Q3)

Date last modified: 07.10.19
Author: Saul Burgess 
*/

#include <stdio.h>

int main(){

	float F1 = 0;
	float F2 = 0;
	float F3 = 0;

	printf("F1 is %5.4f, F2 is %4.3f, Num3 is %1.0f \n",F1,F2,F3);

	printf("Please input the first number\n");
	scanf("%f", &F1);

	printf("Please enter the second number\n");
	scanf("%f", &F2);

	printf("Please enter the third number\n");
	scanf("%f", &F3);
    flushall();

    
    printf("F1 is %5.4f, F2 is %4.3f, Num3 is %1.0f \n",F1,F2,F3);
    
    getchar();
    return 0;
}