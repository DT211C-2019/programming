/*
	Description
This program will allow the user to play a game as if it was the lottery.
It has 6 different options:
1. This option allows the user to enter 6 different NUMBERS rangeing from 1 to 42,
2. This option will display the 6 NUMBERS that the user has entered,
3. This option will sort the NUMBERS entered by the user in an ascending order,
4. This option allows the user to compair theire NUMBERS to the winning NUMBERS which have been hard coded as 1, 3, 5, 7, 9, 11,
5. This option will let the user check how many times they have entered certain NUMBERS and does not display NUMBERS that they have not previously entered,
6. This is the final option that allows the user to exit the program.
This program is modular as each of the aformentioned options are contained within theire own functions.
A combination of loops, string to int conversion and other error checking methods were used to insure that nomatter what the user entered they would not crash the program.
As little header files as possable were also used to insure that the program could be as small and as efficient as possable while not loosing and functionality
	Author
Paul Geoghegan
	Date
Started 20/02/20
Finished 27/02/20
Editted 08/03/20
	OS
Windows
	Compiler
Mingw
*/

//header files
#include <stdio.h>
#include <stdlib.h>

//defineing global variables
#define LENGTH 6
#define MAX 2
#define NUMBERS 42

//function signature
void enterNUMBERS(short[], short[], char*);
void displayNUMBERS(short[]);
void sortNUMBERS(short[]);
void compairNUMBERS(short[]);
void checkFrequency(short[]);
void end(void);


//main function
int main()
{

	unsigned short option;
	char finish, allowAccess;
	unsigned short userNUMBERS[LENGTH];
	unsigned short frequency[NUMBERS] = {0};
	char str[MAX];

	//this loop controlls the main game and continues to loop untill the user chooses to exit
	do
	{

		//this displays the main menu to the user
		printf("\n\n\tPlease choose from one of the following options\n");
		printf("1. Enter your NUMBERS for the lottery\n");
		printf("2. Display the NUMBERS you entered\n");
		printf("3. Sort the NUMBERS you entered in ascending order\n");
		printf("4. Check your NUMBERS against the winning NUMBERS\n");
		printf("5. Show how frequently you have entered certain NUMBERS\n");
		printf("6. end the program\n\n");

		//this gets an input from the user and error checks it so that it can be used to pick an option
		do
		{

			//gets string
			gets(str);

			//converts string to int
			option = atoi(str);

			//checks if the user chose a valid input
			if(option < 1 || option > 6)
			{

				//tells the user that there input was invalid
				printf("That is not a valid option please enter a number between 1 and 6\n");

			} //end if

		} //end do while
		while(option < 1 || option > 6);

		//if the user wants to choose option 1
		if(option == 1)
		{

			//passes the user NUMBERS array to the enter NUMBERS function
			enterNUMBERS(userNUMBERS, frequency, &allowAccess);

		} //end if
		else if(option == 2 && allowAccess == 'y')
		{

			//passes userNUMBERS to displayNUMBERS
			displayNUMBERS(userNUMBERS);

		} //end else if
		else if(option == 3 && allowAccess == 'y')
		{

			//passes the userNumbers array to the sortNumbers function where it will be sorted 
			sortNUMBERS(userNUMBERS);

		} //end else if
		else if(option == 4 && allowAccess == 'y')
		{

			//passes the userNumbers array to the compairNumbers function and compairs it to the winningNumbers array
			compairNUMBERS(userNUMBERS);

		} //end else if
		else if(option == 5 && allowAccess == 'y')
		{


			//passes the frequency  array to the check frequency array where the user will be able to see how often they have  entered certain numbers
			checkFrequency(frequency);

		} //end else if
		else if(option == 6)
		{

			//goes to the end function where the user can choose to exit the program
			end();

		} //end else if
		else
		{

			//tells the user that they need to complete option 1 befor proceeding
			printf("You do not currently have access to option %d please enter your 6 NUMBERS befor trying to proceed\n");

		} //end else

	} //end do while for the main loop
	while(1 == 1);

} //end main


//gets the user to enter there NUMBERS in to an array
void enterNUMBERS(short userNUMBERS[], short frequency[], char *ptr)
{

	register short i = 0;
	short position;
	char duplicate;
	char str[MAX];

	//tells the user to enter 6 NUMBERS
	printf("Please enter 6 numbers\nThey must be an integer value from 1 to 42\n");

	//this scans in the NUMBERS for the 6 number array
	do
	{

		//lets the user know what number they are entering
		printf("Enter number %d/%d\n", i+1, LENGTH);

		//sets duplicate to n so that the program can check if the user has entered that number befor
		duplicate = 'n';

		//this gets a number as a string, converts it to an int and then error checks it to see if it is in the right range
		do
		{

			//gets string
			gets(str);

			//converts string to int
			*(userNUMBERS+i) = atoi(str);

			//checks that the number they entered is between 1 and 42
			if(*(userNUMBERS+i) < 1 || *(userNUMBERS+i) > 42)
			{

				//lets the user know that theire input was not valid
				printf("Sorry that is not an integer between 1 and 42 please try again\n");

			} //end if

		} //end do while
		while(*(userNUMBERS+i) < 1 || *(userNUMBERS+i) > 42);

		//this checks to see if the user has entered the number they just entered befor
		for(register short j = 0;j < i;j++)
		{

			//compairs current number with a previous one
			if(*(userNUMBERS+i) == *(userNUMBERS+j))
			{

				//sets duplicate to y so that the user will have to enter another value
				duplicate = 'y';

			} //end if

		} //end for

		//checks if the user has entered a duplicate number or not
		if(duplicate != 'y')
		{

			//incraments i so that the user can enter the next number
			i++;

		} //end if
		else
		{

			//lets the user know that they have already entered that number
			printf("Sorry you already entered %d please try again\n", *(userNUMBERS+i));

		} //end else

	} //end do while
	while(i < LENGTH);

	//adds the currently stored NUMBERS to the frequency array so that it can keep track of how often that number has been chosen
	for(i = 0;i < LENGTH;i++)
	{

		//sets position for use in referencing the memory adress of the relivent number
		position = *(userNUMBERS+i) - 1;

		//incriments the number stored in the relivent position of frequency to reflect the current NUMBERS in the userNUMBERS array
		*(frequency+position) = *(frequency+position) + 1;

	} //end for

	//changes the value stored in allowAccess so that the user can access the rest of the program
	*ptr = 'y';

} //end enter NUMBERS


//displays the NUMBERS the user entered in the array
void displayNUMBERS(short userNUMBERS[])
{

	printf("You have entered\n");

	//this prints the array the user entered
	for(register short i = 0;i < LENGTH;i++)
	{

		//prints current element at position i
		printf("%d ", *(userNUMBERS+i));

	} //end for

} //end display NUMBERS


//sorts the NUMBERS entered by the user
void sortNUMBERS(short userNUMBERS[])
{

	//temp is used to temperarilly store a value
	short temp;
	register short j;
	char loop;

	//lets the user know that the program is sorting theire NUMBERS
	printf("Sorting numbers...\n");

	//this uses an insert sorting algorithm to sort the array of NUMBERS the user entered in option 1
	for(register short i = 1;i < LENGTH;i++)
	{

		//sets j to the value of i
		j = i;

		//this loop compairs the  current number to the previous NUMBERS in the array
		do
		{

			//this checks if the current number in the j position is smaller than the one in the previous position
			if(*(userNUMBERS+j) < *(userNUMBERS+(j-1)))
			{

				//this swaps the larger number with the smaller number so that the smaller number comes befor it in the array
				temp = *(userNUMBERS+(j-1));
				*(userNUMBERS+(j-1)) = *(userNUMBERS+j);
				*(userNUMBERS+j) = temp;
				loop = 'y';

			} //end if
			else
			{

			//this sets loop to n to stop the loop if there are no more smaller numbers befor the current one
				loop = 'n';

			} //end else

			//decriments j by 1
			j--;

		} //end do while
		while(j > 0 && loop == 'y');

	} // end for

	//tells the user that the sorting has finished
	printf("Sorting complete\n");

} //end sort NUMBERS


//compairs the NUMBERS entered by the user to the winning NUMBERS
void compairNUMBERS(short userNUMBERS[])
{

	//the const array stores the pre-determined winning numbers 
	const unsigned short winningNUMBERS[] = {1, 3, 5, 7, 9, 11};
	short matching;

	//Cycles through the userNUMBERS array
	for(register short i = 0;i < LENGTH;i++)
	{

		//Cycles through the winningNUMBERS array
		for(register short j = 0;j < LENGTH;j++)
		{

			//checks if the NUMBERS entered by the user match the winning NUMBERS
			if(*(userNUMBERS+i) == *(winningNUMBERS+j))
			{

				//adds 1 to matching
				matching++;

			} //end if

		} //end for

	} //end for

	//tells the user how many matching NUMBERS they had
	printf("You had %d matching NUMBERS\n", matching);

	//lets the user know what they have won if anything
	switch(matching)
	{

		//if they got 3 matching NUMBERS
		case 3:
		{

			printf("Congratulations you have won cinema passes\n");
			break;

		} //end case 3
		//if they got 4 matching NUMBERS
		case 4:
		{

			printf("Congratulations you have won a weekend away\n");
			break;

		} //end case 4
		//if they got 5 matching NUMBERS
		case 5:
		{

			printf("Congratulations you have won a new car\n");
			break;

		} //end case 5
		//if the user got 6 matching NUMBERS
		case 6:
		{

			printf("Congratulations you have won the jackpot\n");
			break;

		} //end case 6
		//if the user got less than 3 matching NUMBERS
		default:
		{

			printf("Sorry you did not get enough matches to win a prise\n");

		} //end default

	} //end switch

} //end compair NUMBERS


//checks how often each number entered by the user has been entered befor
void checkFrequency(short frequency[])
{

	printf("Frequency table\n");

	//tells the user how many times they have entered a certain number
	for(register short i = 0;i < NUMBERS;i++)
	{

		//checks if the user has entered a number atleast once
		if(*(frequency+i) > 0)
		{

			//prints the number and how many times it was entered
			printf("You entered %d %d times\n", i+1, *(frequency+i));

		} //end if

	} //end for

} //end check frequency


//checks if the user wants to end the program
void end(void)
{

	char finish;

	//asks the user if they want to end the program
	printf("Are you sure you want to end the program?\n");

	//makes sure the user enters a valid input
	do
	{

		//gets input from the user
		scanf("%1s", &finish);

		//checks to make sure the user entered a valid input
		if(finish != 'y' && finish != 'n')
		{

			//lets the user know they did not enter a valid input
			printf("Sorry that is not a valid input please try again\n");

		} //end if

	} //end do while that checks if the user wants to end the program
	while(finish != 'y' && finish != 'n');;

	//checks if the user wants to exit the program
	if(finish == 'y')
	{

		//tells the user the program is ending and then exits the program
		printf("Okay goodbye!\n");
		exit(0);

	} //end if
	else
	{

		//tells the user that they are returning to the main menu
		printf("Returning to main menu...\n");

	} // end else 

} //end end
