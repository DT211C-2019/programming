/*
	Description
This program takes the contents from the barack array and coppies it to the michelle array while replacing any blank characters with _ characters using pointer notation
	Author
Paul Geoghegan
	Date
2/12/19
	OS
Ubuntu
	Compiler
GCC
*/

#include <stdio.h>

int main()
{

	char barack[] = {'Y', 'E', 'S', ' ', 'W', 'E', ' ', 'C', 'A', 'N'};
	char michelle[10];
	char *ptr1, *ptr2;
	ptr1 = barack;
	ptr2 = michelle;

	//part 1, 2 and 3
	for(int i = 0;i < 10;i++)
	{

		//this checks if the current character in the barack array is a space and if it is 			//it puts an _ character in the same position in the michelle array
		if(*(ptr1+i) == ' ')
		{

			//replaces blank with _
			*(ptr2+i) = '_';

		} //end if
		//coppies contents of barack array to michelle array if the character is not a 			//blank one
		else
		{

			//coppies contents from barack array to michelle array
			*(ptr2+i) = *(ptr1+i);

		} //end else

		//prints contents of michelle array
		printf("%c", *(ptr2+i));

	} //end for

	return 0;
} //end main
