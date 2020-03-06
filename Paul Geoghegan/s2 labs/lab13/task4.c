/*
	Description
Finds most common character
	Author
Paul Geoghegan
	Date
13/02/20
*/

#include <stdio.h>

char mostCommon(char, char, char);

int main()
{

	char char1, char2, char3, megaChar;

	printf("Please enter 3 characters\n");
	scanf("%1s", &char1);

	printf("Enter char2\n");
	scanf("%1s", &char2);

	printf("Enter char3\n");
	scanf("%1s", &char3);

	megaChar = mostCommon(char1, char2, char3);

	printf("The most common character is %c\n", megaChar);

	return 0;
} //end main


//finds most common character
char mostCommon(char char1, char char2, char char3)
{

char megaChar;

	if(char1==char2)
	{

		megaChar = char1;

	} //end if
	else if(char1==char3)
	{

		megaChar = char1;

	} //end else if
	else
	{

		megaChar = char2;

	} //end else

	return megaChar;

} //end most common
