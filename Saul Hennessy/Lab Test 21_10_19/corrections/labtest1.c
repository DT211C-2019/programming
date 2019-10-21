/*
Saul Hennessy
Wrote in Atom (Linux) and compiled via GCC Terminal.
A C program to implement the Fibonacci series
Wrote on 21/10/19
*/
#include <stdio.h>
int main()
{
	int choice, entry, i, a, sum, count;
	i = 0;
	a = 1;
	count = 2;
	choice = 1;
	//Setting variables

	do //begins loop for function
	{
		i = 0;
		a = 1;
		count = 2;
		printf("1: Pick number of terms\n2: Exit\n");
		scanf("%d", &choice);
		if(choice==1) //check to see if user selected to proceed or to exit
		{
			printf("Enter how many terms you would like displayed.\n");
			scanf("%d", &entry);
			printf("0\n1\n");

			while (count < entry) //The actual algorithm for the Fibonacci series. Funnily enough the shortest part.
				{
					sum = i + a;
					count ++;
					printf("%d\n", sum);
					i = a;
					a = sum; //It starts with two constants (we will always have '0' and '1' in this series)
				}					//The counter keeps track, starting at 2 as we have 2 constants hardcoded.
									//The sum is printed, the previous highest number 'a' is saved as 'i', and then 'a' is saved as the sum.
		}
		else
		{
			return 0;
			break;
		}
	}
	while(choice==1);
	getchar();
	return 0;
}
