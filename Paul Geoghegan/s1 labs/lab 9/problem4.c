/*
	Description
Doing maths with pointers
	Author
Paul Geoghegan
	Date
25/11/19
*/

#include <stdio.h>

int main()
{

	int num1, num2, sum;
	int *ptr1, *ptr2, *ptr3;
	ptr1 = &num1;
	ptr2 = &num2;
	ptr3 = &sum;

	//get numbers
	scanf("%d %d", &*ptr1, &*ptr2);

	sum = *ptr2 + * ptr1;

	printf("The sum is %d", *ptr3);

	return 0;
} //end main