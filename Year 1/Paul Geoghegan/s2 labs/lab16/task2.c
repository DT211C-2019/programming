#include <stdio.h>
#include <string.h>

int main()
{

	char country[10];
	char *countries[] = {"Australia", "Belgium", "China", "Denmark",};
	char *capitals[] = {"Canberra", "Brusels", "beijing", "Copenhagen"};

	printf("Please enter a country\n");
	gets(country);

	for(int i = 0;i < 4;i++)
	{

		if(strcmp(country, countries[i]) == 0)
		{

			printf("The capital of %s is %s\n", *(countries+i), *(capitals+i));

		} //end if

	} //end for

	return 0;
} //end main