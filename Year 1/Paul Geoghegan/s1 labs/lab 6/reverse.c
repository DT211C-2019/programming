/*
	Description
This reverses the numbers inputted to an array
	Author
Paul Geoghegan
	Date
4/10/19
*/

#include <stdio.h>

int main()
{

	int num1[5];
	int num2[5];
	int j;

	//setting j to 4 for use in future loop
	j =4;

	//asks user for input
	printf("Please input 5 numbers");

	//gets input
	for(int i = 0;i < 5;i++)
	{

		scanf("%d", &num1[i]);

	} //end for

	//switches numbers
	for(int i = 0;i < 5;i++)
	{

		num2[j] = num1[i];

		j--;

	} //end for

} //ends main