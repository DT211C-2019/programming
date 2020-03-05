/*

*/

#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

#define length 5

int main()
{

	float *numbers;
	float *average;

	numbers = calloc(length, sizeof(float));
	average = calloc(1, sizeof(float));

	for(int i = 0;i < length;i++)
	{

		scanf("%f", &*(numbers+i));

	} //end for

	for(int i = 0;i < length;i++)
	{

		*(average+0) = *(average+0) + *(numbers+i);

	} //end for

	*(average+0) = *(average+0) / length;

	printf("\n The average is %f", *(average+0));

	return 0;
} //end main