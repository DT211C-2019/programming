#include <stdio.h>
#include <string.h>

int main()
{

	char userName[10];
	char *nameList[] = {"paul", "john", "alex"};
	char allow = 'n';

	printf("Please enter your name\n");
	gets(userName);

	for(int i = 0;i < 3;i++)
	{

		if(strcmp(userName, nameList[i]) == 0)
		{

			allow = 'y';

		} //end if

	} //end for

	if(allow == 'y')
	{

		printf("Access granted\n");

	} //end if
	else
	{

		printf("Access denied\n");

	} //end else

	return 0;
} //end main
