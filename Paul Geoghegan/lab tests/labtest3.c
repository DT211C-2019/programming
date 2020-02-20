/*
	Description
This program converts 3 values in either dollars or euro to the other currency by passing the values to a function and returns the average of the converted currency
	Author
Paul Geoghegan
	Date
20/02/20
	OS
Windows
	Compiler
Mingw
*/

//includes header files
#include <stdio.h>

//function signiture
float change_to_euro(float[]);
float change_to_dollar(float[]);

//defines global variables
#define length 3

int main()
{

	float currency[length];
	char type;
	float average;

	//do while loop for changeing currency
	do
	{

		//asks the user which currency they wish to use
		printf("Which currency do you wish to enter?\n");
		printf("\te Euro\n\td Dollar\n\tx exit\n");

		//gets the type of currency the user wishes to use
		scanf("%1s", &type);

		//checks if the currency is euro
		if(type == 'e')
		{

			//asks the user to enter currency in euro
			printf("Please enter your currency in Euros which will be converted to Dollars\n");

			//gets 3 values to fill the array
			for(int i = 0;i < length;i++)
			{

				//gets value
				scanf("%f", &currency[i]);

			} //end for

			// sets average equil to a value returned from the change to euro function
			average = change_to_dollar(currency);

			//prints average
			printf("The average of your converted currency is %.2f\n", average);

		} //end if for checking if chosen currency is euro
		//checks if currency is equil to dollar
		else if(type == 'd')
		{

			//asks the user to enter values in dollars
			printf("Please enter your currency in Dollars which will be converted to Euros\n");

			//gets 3 currency values for array
			for(int i = 0;i < length;i++)
			{

				//gets value
				scanf("%f", &currency[i]);

			} //end for

			//sets average equil to a value returned by the change to euro function
			average = change_to_euro(currency);

			//prints average
			printf("The average of your converted currency is %.2f\n", average); 

		} //end else if for checking if currency selected is dollar
		//checks if the user wants to exit the program
		else if(type == 'x')
		{

			printf("Exiting program");

			//returns 0 to main
			return 0;

		} //end else if
		else
		{

			printf("Sorry that is not a valid option please try again\n");

		} // end else

	} //end do while for converting the currency
	while(1 == 1);

	return 0;
} //end main


//This function converts from euro to dollar
float change_to_euro(float currency[length])
{

	float average = 0;

	printf("Dollar, Euro");

	//converts the currency
	for(int i = 0;i < length;i++)
	{

		//displays value in dollars
		printf("%.2f, ", currency[i]);

		//converts dollars to euro
		currency[i] = currency[i] * 0.84;

		//displays value in euros
		printf("%.2f\n", currency[i]);

		//adds current value to average
		average = average + currency[i];

	} //end for

	//gets average value
	average = average / length;

	//returns average
	return average;

} //end change to euro

float change_to_dollar(float currency[length])
{

	float average = 0;

	printf("Euro, Dollar");

	//converts currency
	for(int i = 0;i < length;i++)
	{

		//displays value in euros
		printf("%.2f, ", currency[i]);

		//converts euro to dollar
		currency[i] = currency[i] * 1.19;

		//displays currency in dollars
		printf("%.2f\n", currency[i]);

		//adds current value to average
		average = average + currency[i];

	} //end for

	//gets average value
	average = average / length;

	//returns average
	return average;

} //end change to dollar
