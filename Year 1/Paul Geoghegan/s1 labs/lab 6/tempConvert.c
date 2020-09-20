/*
	Description
This program will get 3 tempretures in degreesf and convert them to degreesc
	Author
Paul Geoghegan
	Date
4/11/19
*/

#include <stdio.h>

int main()
{

	int temp[3];
	int c;

	//asks the user to input 3 tempretures
	printf("Please input 3 tempretures measured in farinhite\n");

	//gets input
	for(int i = 0;i < 3;i++)
	{

		scanf("%d", &temp[i]);

	} //ends for

	//prints temp and converts
	for(int i = 0;i < 3;i++)
	{

		c = (temp[i] -32.0) * (5.0 / 9.0);

		printf("%d %d\n", temp[i], c);

	} //end for

} //end main