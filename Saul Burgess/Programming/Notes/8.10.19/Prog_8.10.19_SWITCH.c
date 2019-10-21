// Program that uses a switch statement.

#include <stdio.h>
int main()
{
	char my_op;


	printf("Please enter a mathematical operator");
	scanf("%1s", &my_op);
 
	switch (my_op)
	{
		case '+' :
		{
			printf("You entered a plus\n");
			break;
		}
		case '-' :
		{
			printf("You entered a minus\n");
			break;
		}
		case '*' :
		{
			printf("You entered a multiplication sign\n");
			break;
		}
		default:
		{
			printf("Invalid operator entered");
		}
	} // End switch
	return 0;
} // End main
