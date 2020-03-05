/*
	Description
printing all the things cause yeh
	Author
Paul Geoghegan
	Date
25/11/19
*/

#include <stdio.h>

int main()
{

	float array1[3];
	float array2[3];
	float *ptr1, *ptr2;
	ptr1 = array1;
	ptr2 = array2;



	for(int i = 0;i < 3;i++)
	{

		scanf("%f", &*(ptr1+i));
		*(ptr2+i) = *(ptr1+i);
		printf("%f \n", *(ptr1+i));
		printf("%f \n", *(ptr2+i));

	} //end for

	return 0;
} //end main