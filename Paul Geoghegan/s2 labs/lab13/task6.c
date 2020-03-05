/*
	Description
Uses pass by reference to demonstrate how it works
	Author
Paul Geoghegan
	Date
13/02/20
*/

#include <stdio.h>

void reference(int*);

int main()
{

	int num = 1;

	printf("Num is equil to %d\n", num);

	reference(&num);

	printf("Num is equil to %d\n", num);

} //end main


//changes value in num
void reference(int *numPtr)
{

	*numPtr = *numPtr + 2;

	printf("Num is equil to %d\n", *numPtr);

} //end reference
