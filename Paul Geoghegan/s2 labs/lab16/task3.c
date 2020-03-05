#include <stdio.h>
#include <string.h>

int main()
{

	char word1[10];
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

} //end main
