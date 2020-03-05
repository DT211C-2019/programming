/*
	description
Gets 2 arrays and multiplies numbers at corosponding coardinates
	Author
Paul Geoghegan
	Date
11/11/19
*/

#include <stdio.h>

int main()
{

	int num1[5];
	int num2[5];
	int answer;

	printf("input numbers!!!!!");

	for(int i = 0;i < 5;i++)
	{

		scanf("%d", &num1[i]);
		scanf("%d", &num2[i]);
		answer = num1[i] * num2[i];
		printf("%d\n", answer);

	} //end for

} // end main