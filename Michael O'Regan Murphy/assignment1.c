/* Author: Michael O'Regan Murphy
   Student number: C19372026
   Date of completion: 10/11/2019
   Version 1.0
*/


//Program to run a maths quiz with requirements and features



#include <stdio.h>  
#include <stdlib.h> //library used for random number generator
#include <string.h> //library used for string compare functions



//-------------------------------------
// Main menu function prototype
//-------------------------------------
void mainMenu();
void mainMenu_();




int main()
{//start main
	
	
    printf("Welcome to the mathematical quiz of the century\n");
    
	//-------------------------------------
    //initialisations and declarations
    //-------------------------------------
	
	
    int i;
	int amountDesired=-1;
	int amount=0;
	int CorrectAnswers=0;
	int IncorrectAnswers=0;
	int menuSelection=-1;
	int answer;
    char endProgram[256]; //string declaration - same as char array
	int num1, num2, sum;
	int option2COMPLETED;
    srand(time(NULL));    //setting random seed to time clock
	
	
   
    option2COMPLETED=0;
    while(1)
    { //start while outer loop
        
        mainMenu();
        menuSelection=-1;  //to reset the user selection 
        
        
		//------------------------------------------- 
        //repeating until value of 1-4 is given to avoid bad values
        //-------------------------------------------
        while(menuSelection<1 || menuSelection>4)
		{ //start while
	
            mainMenu_();   //calls mainMenu function
			scanf("%d",&menuSelection);
			flushall();
		} //end while
        
		
		
        //------------------------------
        // option 4 to quit program
        //------------------------------
		
		if(menuSelection==4)
		{ //start if
	
            while(1)
            { //start while
		
                system("CLS");
                printf("Are you sure you would like to exit the program? (y/n)\n");
                scanf("%s",endProgram); //%s for string
				
                if ((strcmp(endProgram,"y")==0) || (strcmp(endProgram,"Y")==0)) //String compare to avoid program error if more than 1 character entered
                { //start if
				
                    return 0;
					
                } //end if
				
                else
					
                { //start else
					
                    system("CLS");
                    break;
					
                } //end else
					
            } //end while
			
        } //end if
		
		
        
        //---------------------------------------
        //option 1 to enter no. of questions
        //---------------------------------------
		
        if(menuSelection==1)
		{ //start if
	
			system("CLS");
            printf("How many questions would you like to be asked?\n");
            scanf("%d",&amountDesired);
            flushall();
            
            //-------------------------------------
			//repeating until value of 0-5 is given
			//-------------------------------------
			
			while(amountDesired<0 || amountDesired>5)
            { //start while
                
                printf("Please enter a number between the range of 0 and 5\n");
                scanf("%d",&amountDesired);
                flushall();
				
            } //end while
            if(amountDesired==0)
            { //start if
				
                //return to main menu
				
            } //end if
			
			else
            { //start else
				
                amount=amountDesired; //set amount counter to the amount entered by user
				
            } //end else
		
            system("CLS");
			
        } //end if
    
	
	
		//--------------------------
		//option 2 to start quiz
		//--------------------------
		if(menuSelection==2)
		{ //start if

			system("CLS");
			option2COMPLETED=1; 
			CorrectAnswers=0;	//reset correct counter
			IncorrectAnswers=0; //reset incorrect counter
		
			for(i=0;i<amount;i++)
			{ //start for
	
				//--------------------------------------------------------
				//Creating random addition questions
				//--------------------------------------------------------
				num1=rand()%20;
				num2=rand()%30;
				sum=num1+num2;
				printf("%d + %d = ?\n",num1,num2);
				scanf("%d",&answer);
			
				if(answer==sum)
				{//start if
		
					printf("\n");
					printf("CORRECT! Answer = %d\n",sum);
					printf("\n");
					CorrectAnswers++; //incrementing correct answer counter by 1
				
				} //end if
				else
				{ //start else
				
					printf("\n");
					printf("INCORRECT! Answer = %d\n",sum);
					printf("\n");
					IncorrectAnswers++;  ////incrementing incorrect answer counter by 1
				
				} //end else
			
			} //end for
		
		} //end if


		//-------------------------------------------------------
		//option 3 to display amount of answers correct/incorrect
		//-------------------------------------------------------
	
		if(menuSelection==3 && option2COMPLETED==1) //so option 3 wont work unless the quiz has been ran
		{ //start if
	
			system("CLS");
			printf("\n");
			printf("You got %d answers correct and %d answers incorrect\n",CorrectAnswers,IncorrectAnswers);
			printf("\n");
		
		} //end if

	}//end while outer loop

}//end main



//------------------
//Main menu function
//------------------

void mainMenu()
{ //start function
	printf("MAIN MENU\n");
	printf("1. Enter the number of questions to be asked for this round of the quiz, from 0-5\n");
	printf("2. Start quiz\n");
	printf("3. Display the number of questions that were correctly and incorrectly answered by you in the previous round\n");
	printf("4. Exit program\n");
} //end function

void mainMenu_()
{ //start function
    printf("Please enter the option you would like to choose: ");
} //end function


