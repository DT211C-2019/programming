/*
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Summary: A program that encrypts and decrypts numbers. This program will perform security authorisation based on 4-digit codes,
the user will be able to manually enter codes or generate random 4-digit codes. The program will compare these codes to a hard
coded authorised access code, it can also display how many access sucesses and failures
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Date of Last Edit:
Compiler: GCC (mingw)
OS: Windows 10
*/

// Headers
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Definitions
#define MAX_INPUT_NUMBERS 4
#define HIGH_INPUT_NUMBERS 9
#define LOW_INPUT_NUMBERS 0

// Option Prototypes
void input();
void encrypt();
void check();
void decrypt();
void display_wrongright();
void terminateProgram();

// Utility Prototypes
void headerdisplay(int stringsize, char message[stringsize+1]);
int integer_Error_Checking_Within_Range_No_Char(int rangelow, int rangehigh, int input);


//Begin Main
int main(){
  int function_select;

  while(1){
    //Clears screen and displays header
    headerdisplay(20, "Encrypt/decrypt V1.0");

    printf("Please select one of the following options\n\n");
    printf("(1) - Four digit code input\n");
    printf("(2) - Encrypt code\n");
    printf("(3) - Check encrypted code against authorised access code\n");
    printf("(4) - Decrypt Code\n");
    printf("(5) - Display the number of successful and unsuccesful attempts\n");
    printf("(6) - End program\n\n");

    //Menu Select
    function_select = 0;

    //Input
    scanf("%d", &function_select);

    //Clears whitespace characters
    while (getchar() !='\n');

    function_select = integer_Error_Checking_Within_Range_No_Char(1, 6, function_select);

    //Function Select
    switch (function_select){

      //Input
      case 1:
        //input();
      break;

      //Display
      case 2:
        //encrypt();
      break;

      //Sort
      case 3:
        //check();
      break;

      //Check
      case 4:
        //decrypt();
      break;

      //Frequency
      case 5:
        //display_wrongright();
      break;

      //End Program
      case 6:
        terminateProgram();
      break;

    }//End function_select switch
  }//End program while
}//End main


//Terminates the program
void terminateProgram(){
  char response;

  //Clears screen and displays header
  headerdisplay(20, "Lotto Game V3.1");

  printf("Warning: This will end the program, voiding all stored data. Are you sure you want to continue? y/n\n\a");
  scanf("%c", &response);
  while (getchar() !='\n');

  //Checks the user input, I.E if they want to close the program
  if(response == 'y'){
    headerdisplay(20, "Lotto Game V3.1");
    printf("The program will now shut down, goodbye!");
    sleep(1);
    exit(EXIT_SUCCESS);
  }//Exit program

  else{
    main();

  }//End return to main
}//End terminate program


/*
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Utility Functions
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/


/*
Inputs: Size of message, message
Outputs: Standard header text

Description: Displays the same text every menu used, consistency looks good
*/
void headerdisplay(int stringsize, char message[stringsize+1]){
  int i;

  system("cls");
  for (i=0;i<stringsize;i++){
    printf("-");
  }//End print dash
  printf("\n");

  printf("%s\n",message);

  for (i=0;i<stringsize;i++){
    printf("-");
  }//End print dash
  printf("\n");

}//End Header display


/*
Inputs: The high and low of the chosen range and the number to check
Outputs: The checked input, determined to be a integer within the range

Description: When given a high and low range, this will detect if the user has given a number outside that range, or has given a character. It will then prompt re-entry
*/
int integer_Error_Checking_Within_Range_No_Char(int rangelow, int rangehigh, int input){

  //Error Checking
  while (!(input >= rangelow && input <= rangehigh)){
    printf("Error: this is an invalid element. Please re-enter a NUMBER between %d and %d.\n\a",  rangelow, rangehigh);
    scanf("%d", &input);
    while (getchar() !='\n');
    printf("\n");
  }//End Error Checking

return input;

}//End Error Checking Util Function
