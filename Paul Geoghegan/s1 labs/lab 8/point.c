/*
	Description
Testing pointers
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
	ptr = &var1;

	scanf("%d", &var1);

	printf("you inputted %d\n", *ptr);

	ptr++;

	printf("you inputted %d\n", *ptr);

} //end main