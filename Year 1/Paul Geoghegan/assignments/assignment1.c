/*
	Description
This program has been written for the first c programming assignment and will be a mathmatical quiz game
It will present the user with a main menu where they can choose between 4 different options
1 this option will allow the user to decide how many questions they wish to attempt as part of the quiz
2 this option will present the user with randomly generated questions and numbersn the former of which is equil to the amount the user imputted in option 1. Option 1 also must be compleated befor this option will become available
3 this option will allow the  user to keep track of how they are doing and will present them with the total amount of questions attempted, the amount of questions they got right and the amount of questions they got wrong
4 this option allows the user to exit the program
	Author
Paul Geoghegan
	Compiler
	Date
07/11/19
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define MAX 20

int main()
{

	unsigned short option, correct, wrong;
	short answer, num1, num2;
	int amount, type, total, temp;
	char loop;
	bool op1, op2;
	time_t t;
		char *str[MAX];

	//seeding rand so that each time the program runs it will generate different numbers
	srand((unsigned) time(&t));

	//initialises variables for use in do while loop
mingw gcc
	loop = 'y';
	correct = wrong = option = amount = total = temp = 0;
	op1 = false;
	op2 = false;


	//welcomes the user
	printf("Welcome to the math quiz game.\n");

	//this do while loop controlls how the game functions
	do
	{

		//this prints the introduction and instructions to the user
		printf("\nPlease choose from one of the following options\n\n");
		printf(" 1 This option will allow you to choose how many problems you wish to attempt\n");
		printf(" 2 This option will allow you to attempt the amount of problems you selected\n");
		printf(" 3 This option will allow you to view your results from option 2\n");
		printf(" 4 This option will exit the program\n\n");

		//this will error check the users imput and allow them to choose an option
		do
		{

			//this gets a string with a maximum length of Max and uses standard input
			fgets(str, MAX, stdin);

			//converts string to int
			sscanf(str, "%d", &option);

			//checks user imput
			if(option < 1 || option > 4)
			{

				printf("Please enter a value from 1 to 4 in order to proceed\n");

			} //end if

		} //ends inner do while
		while(option < 1 || option > 4);

		//this is the switch that controlls the main body of the game
		switch(option)
		{

			//This case allows the user to select the amount of problems they wish to attempt
			case 1:
			{

				printf("Okay how many questions do you want to do? \nYour number must be between 1 and 5\n");

				//this stops the user from increasing total without answering the questions
				if(op1 == true && op2 == false)
				{

					//this subtracts the amount of questions the user selected from the total amount as they did not answer the questions in option 2
					total = total - temp;

				} //end if

				//this loops takes an imput from the user and error checks it
				do
				{

					//this gets a string with a maximum length of Max and uses standard input
					fgets(str, MAX, stdin);

					//this converts the string to an int
					sscanf(str, "%d", &amount);

					//this checks if the user has inputted a valid number
					if(amount < 1 || amount > 5)
					{

						//this lets the user know they did not input a correct value
						printf("Please enter an amount from 1 to 5\n");

					} //ends if for error checking

				} //ends inner do while for error checking
				while(amount < 1 || amount > 5);

				//displays how many questions the user has chosen to do
				printf("You have chosen to do %d questions\n", amount);

				//sets op1 to true so the user can now attempt the questions inn option 2 and sets total to allow the game to keep track of the total amount of questions answered byyb the user also amount would clear after exitting case 1 so temp is used to store it's value
				op1 = true;
				total = total + amount;
				temp = amount;

				//breaks out of switch
				break;

			} //ends case 1
			//this case allows the user to attempt the amount of selected problems
			case 2:
			{

				//checks to see if the user has selected an amount of problems
				if(op1 == true)
				{

					//generates questions equil to the amount stored in temp
					for(int i = 0;i < amount;i++)
					{

						//generates random number in order to select what type of question to do and generates numbers to be used in questions
						type = rand() %3;
						num1 = rand() %10;
						num2 = rand() %10;

						//switch to do questions
						switch(type)
						{

							//addition question
							case 0:
							{

								//this displays the question 
								printf("this is an adition question\n");
								printf("%d + %d =", num1, num2);

								//this gets a string with a maximum length of Max and uses standard input
								fgets(str, MAX, stdin);

								//this converts the string to an int
								sscanf(str, "%d", &answer);

								//checks to see if the user is correct
								if(num1 + num2 == answer)
								{

									//this lets the user know they were correct and keeps track of there correct answers by adding 1 to correct
									printf("\n You were correct\n");
									correct++;

								} //ends if
								else
								{

									//this lets the user know they were wrong and keeps track of that by adding 1 to wrong 
									printf("Sorry that was incorrect\n");
									wrong++;

								} //ends else

								//breaks out of switch
								break;

							} //ends case 0
							//subtraction questions
							case 1:
							{

								//this prints the question
								printf("This is a subtraction question\n");
								printf("%d - %d =", num1, num2);

								//this gets a string with a maximum length of Max and uses standard input
								fgets(str, MAX, stdin);

								//this converts the string to an int
								sscanf(str, "%d", &answer);

								//checks to see if the user is correct
								if(num1 - num2 == answer)
								{

									//this lets the user know they were correct and keeps track of that by adding 1 to correct
									printf("\n You were correct\n");
									correct++;

								} //ends if
								else
								{

									//this lets the user know they were wrong and keeps track of that by adding 1 to wrong
									printf("Sorry that was incorrect %d - %d != %d\n", num1, num2, answer);
									wrong++;

								} //ends else

								//breaks out of switch
								break;

							} //end case 1
							//multiplication question
							case 2:
							{

								//this displays the question 
								printf("this is a multiplication question\n");
								printf("%d X %d =", num1, num2);

								//this gets a string with a maximum length of Max and uses standard input
								fgets(str, MAX, stdin);

								// this converts the string to an int
								sscanf(str, "%d", &answer);

								//checks to see if the user is correct
								if(num1 * num2 == answer)
								{

									//this lets the user know they were correct and keeps track of that by adding 1 to correct
									printf("\n You were correct %d X %d = %d\n", num1, num2, answer);
									correct++;

								} //ends if
								else
								{

									//this lets the user know they were wrong and keeps track of that byb adding 1 to wrong
									printf("Sorry that was incorrect %d X %d != %d\n", num1, num2, answer);
									wrong++;

								} //ends else

								//breaks out of switch
								break;

							} //end case 2
							defalt:
							{

								//this lets the user know that something has gone wrong
								printf("Sorry but it seems that an error has occured please try again\n");

							} //ends defalt

						} //ends inner switch for questions

					} //ends for loop

					//this sets op2 to true so that the user can view there results and sets op1 to false so that the user cannot keep answering the same amount of questions while not increasing the total amount of questions answered
					op2 = true;
					op1 = false;

				} //ends if
				else
				{

					//this lets the user know that they need to complete option 1 befor they can answer the questions in option 2
					printf("Sorry you must first choose the amount of questions you wish to attempt. \nWhen you return to the menu please select option 1 \n");

				} //ends else

				//breaks out of switch
				break;

			} //ends case 2
			//case 3 for displaying results
			case 3:
			{

				//this checks to make sure the user has answered the questions in option 2 befor displaying there results as otherwise there correct and wrong questions would not add up to the total amount of questions answered
				if(op2 == true)
				{

					/*


					I was going to clear the screen but I ran in to some issues with my screen reader not working as intended after this so I decided to remove this feature even tho it may improve readabilitty

					//this clears the screen whenever the users results are displayed
					system("CLS");

					*/

					//this displays the users results from option 2
					printf("Your results from option 2 are\n");
					printf("you attempted %d questions\nyou got %d questions correct\nand got %d questions wrong\n", total, correct, wrong);

					//this sets op 2 to false so that the user cannot increase the amount of total questions without answering said questions
					op2 = false;

				} //ends if
				else
				{

					//this lets the user know that they must complete the quiz befor viewing there results
					printf("Sorry you must first complete the quiz in option 2 befor your results will be displayed\n");

				} //ends else

				//breaks out of case 3
				break;

			} //end case 3
			//case 4 for exiting program
			case 4:
			{

				//this thanks the user for playing and sets loop to n to exit the game
				printf("Okay thanks for playing");
				loop = 'n';

			} //end case 4
			defalt:
			{

			//this lets the user know that something has gone wrong
			printf("Sorry but an error has occured please try again");

			} ends defalt

		} //ends outer switch

	} //ends outer do while
	while(loop=='y'||loop=='Y');

	return 0;
} // end program