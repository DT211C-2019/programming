/*
	Description
Sorts 3 numbers to see which is the biggest and the largest
	Author
Paul Geoghegan
	Date
5/02/20
*/

#include <stdio.h>

	void sort(int, int, int);

int main()
{

	int num1, num2, num3;

	printf("Please enter 3 numbers");
	scanf("%d %d %d", &num1, &num2, &num3);

	sort(num1, num2, num3);

	return 0;
} //end main


//sorts the 3 numbers
void sort(int num1, int num2, int num3)
{

	int temp;

	//sorts numbers
	for(int i = 0;i < 2;i++)
	{

		if(num1 > num2)
		{

			temp = num1;
			num1 = num2;
			num2 = temp;

		} //end if

		if(num2 > num3)
		{

			temp = num2;
			num2 = num3;
			num3 = temp;

		} //end if

	} //end for

	printf("The largest number you entered was %d\nThe smallest number you entered was %d", num3, num1);

} //end sort