/*
	Description
trying to input memory locations
	Author
Paul Geoghegan
	Date
18/11/19
*/

#include <stdio.h>

int main()
{

	int var1;
	int *ptr;

	printf("wnter a memory location");
	scanf("%p", &ptr);
	printf("\n ptr contains %d and is located at %p", ptr, &ptr);	

} //end main