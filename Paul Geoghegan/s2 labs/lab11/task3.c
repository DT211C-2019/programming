/*
	Description
Replaces all blank chars in an array with the _ char
	Author
Paul Geoghegan
	Date
30/01/20
*/

#include <stdio.h>
#include <stdlib.h>

#define length 8

int main()
{

	char chars[] = {'a', ' ', 'b', ' ', 'c', ' ', ' ', 'd'};

	for(int i = 0;i < length;i++)
	{

		if(*(chars+i) == ' ')
		{

			*(chars+i) = '_';

		} //end if

	} //end for

	return 0;
} //end main