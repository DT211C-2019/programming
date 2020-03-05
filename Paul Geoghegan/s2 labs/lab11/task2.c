/*
	Description
This program sets the length of an array and then calculates the sum of the values entered by the user
	Author
Paul Geoghegan
	Date
30/01/20
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

	int length, sum;
	int *numbers;

	sum = 0;

	printf("Please enter the length of the array\n");
	scanf("%d", &length);

	numbers = calloc(length, sizeof(int));

	for(int i = 0;i < length;i++)
	{

		printf("Input a number\n");
		scanf("%d", &*(numbers+i));
		sum = sum + *(numbers+i);

	} //end for

	printf("The numbers stored in the array are\n");

	for(int i = 0;i < length;i++)
	{

		printf("%d ", *(numbers+i));

	} //end for

	printf("\nThe sum of the array is %d", sum);

	free(numbers);
	return 0;
} //end main