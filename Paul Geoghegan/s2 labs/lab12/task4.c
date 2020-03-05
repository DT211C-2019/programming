/*
	Description
This program calculates the sum and average of 3 numbers
	Author
Paul Geoghegan
	Date
5/02/20
*/

//header files
#include<stdio.h>

//function signature
void sum(int, int, int);
void average(int);

int main()
{

	int num1, num2, num3;

	//gets input from user
	printf("Please enter 3 numbers\n");
	scanf("%d %d %d", &num1, &num2, &num3);

	sum(num1, num2, num3);

	return 0;
} //end main


//calculates the sum of the 3 numbers
void sum(int num1, int num2, int num3)
{

	int sum;

	sum = num1 + num2 + num3;

	printf("The sum of the numbers is %d\n", sum);

	average(sum);

} //end sum

	//calculates the average from the sum
	void average(int sum)
{

	int av;

	av = sum / 3;

	printf("The average of the 3 numbbers is %d", av);

} //end average
