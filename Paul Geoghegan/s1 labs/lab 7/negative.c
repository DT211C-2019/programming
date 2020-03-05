/*
	Description
find the not plus numbers
	Author
Paul Geoghegan
	Date
11/11/19
*/

#include <stdio.h>

int main()
{

	int num[4][5];

	for(int i = 0;i <4;i++)
	{

		for(int j = 0;j < 5;j++)
		{

			scanf("%d", &num[i][j]);

		} //end for

	} //end for

	for(int i = 0;i < 4;i++)
	{

		for(int j = 0;j < 5;j++)
		{

			if(num[i][j] < 0)
			{

				printf("%d is at %d, %d", num[i][j], i, j);

			} //end if

		} //end for

	} //end for

} //end main