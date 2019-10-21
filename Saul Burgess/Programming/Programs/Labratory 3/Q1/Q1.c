/* 
Summary: To enter in three numbers, and display these on seperate lines.

Date last modified: 07.10.19
Author: Saul Burgess 
*/

#include <stdio.h>

int main(){

	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	printf("Num1 is %d, Num2 is %d, Num3 is %d \n",num1,num2,num3);

	printf("Please input the first number\n");
	scanf("%d", &num1);

	printf("Please enter the second number\n");
	scanf("%d", &num2);

	printf("Please enter the third number\n");
	scanf("%d", &num3);
    flushall();

    
    printf("Num1 is %d, Num2 is %d, Num3 is %d \n",num1,num2,num3);
    
    getchar();
    return 0;
}