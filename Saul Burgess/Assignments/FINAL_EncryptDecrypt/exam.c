/*
 * ---------------------------------------------------------------------------------------------------------------------
 * Summary: A program that encrypts and decrypts numbers. This program will perform security authorisation based on
 * 4-digit alphanumeric codes, the user will be able to manually enter codes or generate random 4-digit codes. The
 * program will then compare these codes to a hard coded authorised access code, it can also display how many access
 * successes and failures there have been during the current runtime.
 * ---------------------------------------------------------------------------------------------------------------------
 * Date of Last Edit: 2020-05-11
 * Compiler: GCC (mingw)
 * OS: Windows 10
 * ---------------------------------------------------------------------------------------------------------------------
 */

// Headers
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Definitions
#define MAX_INPUT_NUMBERS 4
#define HIGH_INPUT_NUMBERS 9
#define LOW_INPUT_NUMBERS 0

// Structs
struct code_counter{
    int correct_code;
    int wrong_code;
};

// Current Authorised Access Code / struct
const int AAC[4] = {4, 5, 2, 3};
struct code_counter success_failure;

// Option Prototypes
int input(int *access_code, int *buffer_status);
int encrypt(int *access_code, const int *buffer_status);
int check(const int *access_code, const int *buffer_status, int *buffer_lock);
int decrypt(int *access_code, const int *buffer_status);
void display_wrong_right();

// Utility Prototypes
void header_display(int string_size, char message[string_size+1]);
void swap(int* a, int* b);
int integer_Error_Checking_Within_Range_No_Char(int range_low, int range_high, int *input);




//Begin Main
int main(){
  int function_select, access_code[MAX_INPUT_NUMBERS], buffer_status = 0, buffer_lock = 0;
  register int i;
  short menu_cont = 1;
  enum {INPUT_SIZE = 30};
  char *ptr, str[INPUT_SIZE], override_yes_no;

  //Initialise struct
  success_failure.wrong_code = 0;
  success_failure.correct_code = 0;

  //Initialises random generator
  srand(time(0));

  //Zeroes out the buffer for use later
  for (i=0; i<MAX_INPUT_NUMBERS; i++){
      *(access_code + i) = 0;
  }//End zero out for

  while(menu_cont == 1){
    //Clears screen and displays header
    header_display(20, "Encrypt/decrypt V1.0");
    printf("The buffer currently contains: ");

    //Displays what is currently contained in the buffer
    for(i=0; i<MAX_INPUT_NUMBERS; i++){
        printf("%d ", *(access_code + i));
    }//End display buffer for

    //Displays the current status of the buffer
    printf("\nBuffer Status is: %d\n\n", buffer_status);

    printf("Please select one of the following options:\n\n");
    printf("(1) - Four digit code input\n");
    printf("(2) - Encrypt code\n");
    printf("(3) - Check encrypted code against authorised access code\n");
    printf("(4) - Decrypt Code\n");
    printf("(5) - Display the number of successful and unsuccessful attempts\n");
    printf("(6) - End program\n\n");

    //Input
    fgets(str, INPUT_SIZE, stdin);
    function_select = strtol(str, &ptr, 10);

    //Function Select
    switch (function_select){

      //Input
      case 1:
        *access_code = input(access_code, &buffer_status);
            if (buffer_status == 0 || buffer_status == 2){
                buffer_status = 1;
            }// End check if buffer is in correct state
      break;

      //Encrypt
      case 2:
        *access_code = encrypt(access_code, &buffer_status);
        if (buffer_status == 1){
            buffer_lock = 0;
            buffer_status = 2;
        }// End check if buffer is in correct state
      break;

      //Check
      case 3:
        buffer_lock = check(access_code, &buffer_status, &buffer_lock);
      break;

      //Decrypt
      case 4:
        *access_code = decrypt(access_code, &buffer_status);
            if (buffer_status == 2){
                buffer_status = 1;
            }// End check if buffer is in correct state
      break;

      //Frequency
      case 5:
        display_wrong_right();
      break;

      //End Program
      case 6:
          header_display(20, "Encrypt/decrypt V1.0");
          printf("\nWarning! This will end the program, and clear all data\n\a"
                 "Are you sure you want to do this? y/n: ");
          //Grabs user answer
          scanf("%c", &override_yes_no);
          while (getchar() !='\n');

          if (override_yes_no == 'y'){
              menu_cont = 0;
          }//End do you want to end the program check
       break;

      default:
          header_display(20, "Encrypt/decrypt V1.0");
          printf("\nThis is not a valid element!\n\n\a");
          printf("Press enter to continue: ");
          getchar();

    }//End function_select switch
  }//End program while
}//End main


//Function that handles imputing 4-digit codes into the program
int input(int *access_code, int *buffer_status){

    //definitions
    enum {INPUT_SIZE = 30};
    char *ptr, str[INPUT_SIZE];
    char override_yes_no;
    register int i;
    int input, display_i;

    /*
     * Checks if there is already a code in the buffer, if so, asks the user if they are sure they want to wipe what
     * is currently in the buffer.
    */
    if (*buffer_status > 0){
        header_display(20, "Encrypt/decrypt V1.0");
        printf("\nWarning! This function will overwrite what is already in the buffer.\n\a"
               "Are you sure you want to do this? y/n: ");

        //Grabs user answer
        scanf("%c", &override_yes_no);
        while (getchar() !='\n');

        //Returns to main if the user does not wish to change what is in the buffer
        if (override_yes_no == 'n'){
            return *access_code;
        }// End 'Are you sure you want to do this?' check

    }//end check if there is a number already in the buffer

    //Handles random code generation
    header_display(20, "Encrypt/decrypt V1.0");
    printf("\nDo you want to generate a random code? y/n\n"
           "Press n if you wish to manually enter a code\n");

    //Grabs user input, also prevents newline characters from contaminating the later inputs
    scanf("%c", &override_yes_no);

    //Checks for user input, if y it will generate a random code
    if (override_yes_no == 'y'){
        for (i=0; i < MAX_INPUT_NUMBERS; i++){
            *(access_code + i) = rand() % (HIGH_INPUT_NUMBERS + 1);
        }//End generate random code

        //Solves an issue where stray newline characters contaminated manual input in rare circumstances
        while (getchar() !='\n');

        return *access_code;
    }//End random generator

    //Displays header, and prompts user for input
    header_display(20, "Encrypt/decrypt V1.0");
    printf("\nPlease enter four digits between %d and %d\n\n"
           "Note: Characters and non-standard input will be replaced with 0\n\n", LOW_INPUT_NUMBERS, HIGH_INPUT_NUMBERS);

    //Catches stray newline characters
    while (getchar() !='\n');

    //For that handles the input of numbers into the buffer
    for (i=0; i < MAX_INPUT_NUMBERS; i++){

        //More user friendly iterative for displaying
        display_i = i+1;

        //Displays marker
        printf("(%d): ", display_i);

        //Grabs user input, then converts the string to an integer.
        fgets(str, INPUT_SIZE, stdin);
        input = strtol(str, &ptr, 10);
        input = integer_Error_Checking_Within_Range_No_Char(LOW_INPUT_NUMBERS, HIGH_INPUT_NUMBERS, &input);
        printf("\n");

        //Inputs sanitized input into the array
        *(access_code + i) = input;

    }// End input for

    return *access_code;
}//End Input


// Encrypt function, handles the encryption function of this program
int encrypt(int *access_code, const int *buffer_status){
    register int i;

    // Switch that handles the various states of the program that could be encountered
    switch (*buffer_status){

        // Failure case, if the data is not entered
        case 0:
            header_display(20, "Encrypt/decrypt V1.0");
            printf("\nWARNING! No input has been entered, please enter a code.\n"
                   "Press Enter to continue: \a");
            getchar();
            return *access_code;

        //Successful case, if the data is entered but not encrypted
        case 1:
            //Swaps address of both arrays
            swap(&access_code[0], &access_code[2]);
            swap(&access_code[1], &access_code[3]);

            //Adds one to each entry
            for (i=0; i<MAX_INPUT_NUMBERS; i++){
                *(access_code + i) = *(access_code + i) + 1;
            }//End add one to each entry for

            //Checks if any entry is equal to 10, if so, replaces that number with a zero
            for(i=0; i<MAX_INPUT_NUMBERS; i++){
                if (*(access_code + i) == 10){
                    *(access_code + i) = 0;
                }//End check if 10
            }//End cycle through all entries for

            // Returns encrypted buffer
            header_display(20, "Encrypt/decrypt V1.0");
            printf("\nBuffer has been successfully encrypted!\n"
                   "Press Enter to continue: ");
            getchar();
            return *access_code;

        // Failure case, if the data is already encrypted
        case 2:
            header_display(20, "Encrypt/decrypt V1.0");
            printf("\nWARNING! The buffer is already encrypted, you cannot encrypt twice\n"
                   "Press Enter to continue: \a");
            getchar();
            return *access_code;

        // Default, in case of a catastrophic issue. Will terminate the program if encountered.
        default:
            printf("WARNING! This should be impossible, please relaunch the program.\a\n"
                   "Press enter to continue: ");
            getchar();
            exit(EXIT_FAILURE);

    }//End status switch
}//End Encrypt


// Checks buffer against Authorised Access Code
int check (const int *access_code, const int *buffer_status, int *buffer_lock){

    register int i;
    int element_correct_count = 0;

    switch (*buffer_status){

        // Failure case, if the user has not inputted any data
        case 0:
            header_display(20, "Encrypt/decrypt V1.0");
            printf("\nWARNING! No input has been entered, please enter a code.\n"
                   "Press Enter to continue: \a");
            getchar();
            return *buffer_lock;

        // Failure case, if the user has entered data but not encrypted it
        case 1:
            header_display(20, "Encrypt/decrypt V1.0");
            printf("\nWARNING! The buffer has not been encrypted. Please encrypt the buffer first\n"
                   "Press Enter to continue: \a");
            getchar();
            return *buffer_lock;

        // Success case, if the user has done things correctly
        case 2:
            // Checks buffer against current authorised access code
            for (i=0; i < MAX_INPUT_NUMBERS; i++){
                if (*(AAC + i) == *(access_code + i)){
                    element_correct_count++;
                }//End check if correct
            }//End check for


            // Logic for determining if the code is correct
            if(element_correct_count == MAX_INPUT_NUMBERS){
                header_display(20, "Encrypt/decrypt V1.0");
                if (*buffer_lock == 0){
                    success_failure.correct_code++;
                }// End check if buffer has been used
                printf("\nCorrect Code entered.\n"
                       "Press Enter to continue: \a");
                getchar();

                //Locks buffer so you cannot generate multiple erroneous successes or failures
                *buffer_lock = 1;
                return *buffer_lock;
            }// End check if all elements are correct
            else{
                header_display(20, "Encrypt/decrypt V1.0");
                if (*buffer_lock == 0){
                    success_failure.wrong_code++;
                }// End check if buffer has been used
                printf("\nWrong Code entered.\n"
                       "Press Enter to continue: \a");
                getchar();

                //Locks buffer so you cannot generate multiple erroneous successes or failures
                *buffer_lock = 1;
                return *buffer_lock;
            }// Catch if check fails

        // Default case, will terminate program if this occurs. Due to that being a catastrophic error
        default:
            printf("WARNING! This should be impossible, please relaunch the program.\a\n"
                   "Press enter to continue: ");
            getchar();
            exit(EXIT_FAILURE);
    }//End option switch
}//End check


// Decrypt function, handles decryption function of this program
int decrypt(int *access_code, const int *buffer_status){

    register int i;

    switch (*buffer_status){

        // Fail case, if the user has not entered in anything
        case 0:
            header_display(20, "Encrypt/decrypt V1.0");
            printf("\nWARNING! No input has been entered, please enter a code.\n"
                   "Press Enter to continue: \a");
            getchar();
            return *access_code;

        // Fail case, if the user has entered data but not encrypted it
        case 1:
            header_display(20, "Encrypt/decrypt V1.0");
            printf("\nWARNING! The buffer has not been encrypted. Please encrypt the buffer first\n"
                   "Press Enter to continue: \a");
            getchar();
            return *access_code;

        // Success case, decrypts the code
        case 2:

            // Subtracts 1 from each element in the buffer
            for (i=0; i<MAX_INPUT_NUMBERS; i++){
                *(access_code + i) = *(access_code + i) - 1;
            }// End subtract for

            // Replaces all -1s to 9s
            for (i=0; i<MAX_INPUT_NUMBERS; i++){
                if(*(access_code + i) == -1){
                    *(access_code + i) = 9;
                }// End check if -1
            }// End replace for

            // Swaps several entries
            swap(&access_code[0], &access_code[2]);
            swap(&access_code[1], &access_code[3]);

            // Returns decrypted code
            header_display(20, "Encrypt/decrypt V1.0");
            printf("\nBuffer has been successfully decrypted!\n"
                   "Press Enter to continue: ");
            getchar();
            return *access_code;

        // Default case, will terminate the program if this occurs. Due to that being a catastrophic error
        default:
            printf("Warning! This should be impossible, please relaunch the program.\a\n"
                   "Press enter to continue: ");
            getchar();
            exit(EXIT_FAILURE);
    }//End switch
}// End decrypt


//Displays how many access codes have been incorrect and how many have been correct
void display_wrong_right(){
    header_display(20, "Encrypt/decrypt V1.0");
    printf("\nYou have entered %d codes successfully.\n"
           "You have entered %d codes unsuccessfully.\n"
           "Press Enter to continue: \a", success_failure.correct_code, success_failure.wrong_code);
    getchar();
}; // End wrong_right


/*
------------------------------------------------------------------------------------------------------------------------
Utility Functions
------------------------------------------------------------------------------------------------------------------------
*/


/*
Inputs: Size of message, message
Outputs: Standard header text

Description: Displays the same text every menu used, consistency looks good
*/
void header_display(int string_size, char message[string_size+1]){
    int i;

    system("cls");
    for (i=0;i<string_size;i++){
        printf("-");
    }// End print dash

    printf("\n");
    printf("%s\n",message);

    for (i=0;i<string_size;i++){
        printf("-");
    }// End print dash
    printf("\n");

}// End Header display



/*
Inputs: The high and low of the chosen range and the number to check
Outputs: The checked input, determined to be a integer within the range
Description: When given a high and low range, this will detect if the user has given a number outside that range,
or has given a character. It will then prompt re-entry
*/
int integer_Error_Checking_Within_Range_No_Char(int range_low, int range_high, int *input){

    //Required definitions
    enum {INPUT_SIZE = 30};
    char *ptr, str[INPUT_SIZE];

    //Error Checking number
    while (!(*input >= range_low && *input <= range_high)){
        printf("Error: this is an invalid element."
               "Please re-enter a NUMBER between %d and %d.\n\a",  range_low, range_high);
        fgets(str, INPUT_SIZE, stdin);
        *input = strtol(str, &ptr, 10);
        printf("\n");
    }//End Range Error Checking

    //Returns sanitized input
    return *input;

}//End Error Checking Util Function


/*
Inputs: The two elements you wish to Swap
Outputs: N/A
Description: A small utility designed to swap two values
*/
void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;

    //printf("t: %d, a: %d, b: %d\n", t, *a, *b);
    //getchar();

}//End Swap
