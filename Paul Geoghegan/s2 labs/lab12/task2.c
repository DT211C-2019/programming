/*
	Descriprtion
This program printsts a character multiple times equil to an int entered by the user
	Author
Paul Geoghegan
	Date
5/02/20
*/

#include <stdio.h>
#include <stdlib.h>

//function signature
void printing(char, int);

int main()
{

	char c1;
	int num;

	//gets character input
	printf("Please enter the character you wish to print\n");
	scanf("%1s", &c1);

	//gets int input
	printf("Please enter the number of times you want %c to be printed\n", c1);
	scanf("%d", &num);

	printing(c1, num);

	return 0;
} // end main


//this function prints the character a designated amount of times
void printing(char c1, int num)
{

	for(int i = 0;i < num;i++)
	{

		printf("%c", c1);

	} //end for

} //end printing
