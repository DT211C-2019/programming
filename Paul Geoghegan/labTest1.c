/*
	Description

	Compiler
mingw gcc
	OS
Windows
	Author
Paul Geoghegan
	Date
21/10/19
*/

#include <stdio.h>

int main()
	{

	unsigned int terms, term1, term2;
	int temp;
	char loop;

	//initialises term1 and term2 for use in for loop
	term1 = 1;
	term2 = 0;

	do
	{

		//this asks the user how many terms they wish to use
		printf("How many terms do you wish to use in the sequence? \n Please enter an integer greater than 0 \n");
		scanf("%d", &terms);

		if(terms >= 2)
		{

			printf("0 \n 1 \n");

		} //ends if block
		else if(terms == 1)
		{

			printf("0 \n");

		} //ends else if

		for(int i =2;i < terms;i++)
		{

			temp = term1 + term2;

			//this prints the sequence
			printf("%d \n", temp);

			term2 = term1;
			term1 = temp;

		} //ends for loop for finding the terms of the sequence

		printf("Do you wish to use the program again? \n y yes \n anykey no");
		scanf("%1s", &loop);



	} //end do while loop
	while(loop=='y');

	return 0;
} //end program