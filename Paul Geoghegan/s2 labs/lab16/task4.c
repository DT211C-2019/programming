#include <stdio.h>
#include <string.h>

void stringStick(char [], char []);
void stringLength(char []);

int main()
{

	char word1[100];
	char word2[10];

	printf("Please enter word1\n");
	gets(word1);

	printf("Please enter word2\n");
	gets(word2);

	if(strcmp(word1, word2) == 0)
	{

		printf("These words do match\n");

	} //end if
	else
	{

		printf("These words do not match\n");

	} //end else

	stringStick(word1, word2);
	stringLength(word1);

	return 0;
} //end main


//concatinate all the things
void stringStick(char word1[], char word2[])
{

	strcat(word1, word2);

	printf("Word1 is %s", word1);

} //end charStick

void stringLength(char word[])
{

	int length;

	length = strlen(word);

	printf("The length of the word is %d\n", length);

} //end length
