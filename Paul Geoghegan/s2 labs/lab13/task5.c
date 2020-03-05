/*
	Description
Demonstrates pass by value
	Author
Paul Geoghegan
	Date
13/02/20
*/

#include <stdio.h>

void pass(int);

int main()
{

	int num = 1;

	printf("num is equil to %d\n", num);

	pass(num);

	printf("Num is equil to %d\n", num);

} //end main


//passes num to demonstrate pass by value
void pass(int num)
{

	num = num + 2;

	printf("num is equil to %d\n", num);

} //end pass
