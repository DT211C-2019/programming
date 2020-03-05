/*
	Description
This sorts an array based on the size of the number
	Author
Paul Geoghegan
	Date
4/11/19
*/

#include <stdio.h>

int main()
{

	int num[3];
	int temp;

	printf("Please input 3 numbers\n");

	for(int i = 0;i < 3;i++)
	{

		scanf("%d", &num[i]);

	} //end for

	//sorting
	for(int i = 0;i < 2;i++)
	{

		if(num[i] > num[i+1])
		{

			temp = num[i];
			num[i] = num[i+1];
			num[i+1] = temp;

		} //end if

	} //end for

	if(num[0] > num[1])
	{

		temp = num[0];
		num[0] = num[1];
		num[1] = temp;

	} //end if

} //end main