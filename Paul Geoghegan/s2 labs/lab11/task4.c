/*

*/

#include <stdio.h>
#define length 5

int main()
{

	float litres[] = {11.5, 11.21, 12.7, 12.6, 12.4};
	float miles[] = {471.5, 358.72, 495.3, 453.6, 421.6};
	int mpl[length];

	for(int i = 0;i < length;i++)
	{

		*(mpl+i) = *(miles+i) / *(litres+i);

	} //end for

	for(int i = 0;i < length;i++)
	{

		printf("%d ", *(mpl+i));

	} //end for

	return 0;
} //end main