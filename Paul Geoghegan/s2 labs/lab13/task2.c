/*
	Description
Calculates the average of 3 numbers
	Author
Paul Geoghegan
	Date
13/02/20
*/

#include <stdio.h>

float averageNum(int, int, int);

int main()
{

	int num1, num2, num3;
	float average;

	printf("Please enter 3 numbers\n");
	scanf("%d %d %d", &num1, &num2, &num3);

	average = averageNum(num1, num2, num3);

	printf("The average of the 3 numbers is %f", average);

	return 0;
} //end main


//calculates average
float averageNum(int num1, int num2, int num3)
{

	float average;

	average = num1 + num2 + num3;
	average = average / 3;

	return average;
} //ends averageNum