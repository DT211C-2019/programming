/*
Saul Hennessy
My first assignment, a program to simulate a maths quiz game
Written on 22/10/19
Written in Atom (Linux/Windows) and compiled with GCC.
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//srand(time(NULL))
//rand() %
int main()
{
	int exit, reply, qnum, ans1, ans2, ans3, ans4, ans5, Uans1, Uans2, Uans3, Uans4, Uans5, correct, incorrect, quizcount; //Initialising all the variables
	char check;
	exit=quizcount=0; //Begins the loop, and locks option 3 on first launch.
	while (exit==0)
 {
	 	ans1=ans2=ans3=ans4=ans5=Uans1=Uans2=Uans3=Uans4=Uans5=0; //Initialising all the variables
		printf("Hello! Choose an option\n\n");
		printf("1. Choose the amount of questions\n2. Begin the quiz\n3. See results\n4. Exit\n\n");
		scanf("%d", &reply);
		switch (reply) //Cycles through selected options
		{
			case 1:
				printf("How many questions (Max of 5)?\n\n");
				scanf("%d", &qnum);
				break;
			case 2:
			correct=incorrect=0; //Reseting the counters
			quizcount=1; //This unlocks option 3, case 3 below.
				if ((qnum==5) || (qnum==4) || (qnum==3) || (qnum==2) || (qnum==1)) //The beginning of the great nested if-else train.
				{                                                                  //Prevents having to hardcode a massive line of functions for all 5 possible lengths
					printf ("3 + 2?\n");                                             //Instead, this runs trough each question individually, eliminating each one at a time
					scanf ("%d", &Uans1);
					ans1=3+2;
					if (ans1==Uans1)
					{
						correct++;
						printf("You guessed %d,the answer was %d.Correct!\n\n", Uans1, ans1);
					}
					else
					{
						incorrect++;
						printf("You guessed %d,the answer was %d.Incorrect\n\n", Uans1, ans1);
					}
					if  ((qnum==5) || (qnum==4) || (qnum==3) || (qnum==2))
					{
						printf ("8 + 5?\n");
						scanf ("%d", &Uans2);
						ans2=8+5;
						if (ans2==Uans2)
						{
							correct++;
							printf("You guessed %d,the answer was %d.Correct!\n\n", Uans2, ans2);
						}
						else
						{
							incorrect++;
							printf("You guessed %d,the answer was %d.Incorrect\n\n", Uans2, ans2);
						}
						if ((qnum==5) || (qnum==4) || (qnum==3))
						{
							printf ("9 / 3?\n");
							scanf ("%d", &Uans3);
							ans3=9/3;
							if (ans3==Uans3)
							{
								correct++;
								printf("You guessed %d,the answer was %d.Correct!\n\n", Uans3, ans3);
							}
							else
							{
								incorrect++;
								printf("You guessed %d,the answer was %d.Incorrect\n\n", Uans3, ans3);
							}
							if ((qnum==5) || (qnum==4))
							{
								printf ("21 - 8?\n");
								scanf ("%d", &Uans4);
								ans4=21-8;
								if (ans4==Uans4)
								{
									correct++;
									printf("You guessed %d,the answer was %d.Correct!\n\n", Uans4, ans4);
								}
								else
								{
									incorrect++;
									printf("You guessed %d,the answer was %d.Incorrect\n\n", Uans4, ans4);
								}
								if (qnum==5)
								{
									printf ("7 x 3?\n");
									scanf ("%d", &Uans5);
									ans5=7*3;
									if (ans5==Uans5)
									{
										correct++;
										printf("You guessed %d,the answer was %d.Correct!\n\n", Uans5, ans5);
									}
									else
									{
										incorrect++;
										printf("You guessed %d,the answer was %d.Incorrect\n\n", Uans5, ans5);
									}

								}
								else
								{
									break;
								}

							}
							else
							{
								break;
							}

						}
						else
						{
							break;
						}

					}
					else
					{
						break;
					}

				}
				else
				{
					break;
				}
			case 3:
				if (quizcount==1)
				{
					printf("Correct=%d\n\nIncorrect=%d\n\n", correct,incorrect);
				}
				else
				{
					printf ("Sorry!This only unlocks after completing the quiz!\n\n"); //A quick validation of whether a quiz has been completed.
				}
				break;
			case 4:
				exit=1;
				return 0;
				break;
			default: //This prevents any unwanted integers bugging out the code
				printf("An option, please.\n\n");
				break;
		}

	}

	return 0;
}
