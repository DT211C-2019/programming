/*
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Summary: A program which plays a lotto game with a predetermined set of numbers. The program will allow entry of six numbers, display these in a 1D array with pointer notation, sort the contents of the array
in ascending order and compare the contents of the input array to the given Lotto number, then displaying the frequency of all inputted data sets.
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Date of Last Edit: 10/11/19
Compiler: GCC (mingw)
OS: Windows 10
*/

//Headers
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

//Definitions
#define NO_OF_INPUTS 6
#define MAX_PREDEFINED_RANGE 42
#define MIN_PREDEFINED_RANGE 1

//Winning Numbers
int winningnumbers[NO_OF_INPUTS] = {1, 3, 5, 7, 9, 11};

//Option Prototypes
void input();
void display();
void sort();
void compare();
void frequency();
void terminateProgram();

//Utility Prototypes
int integer_Error_Checking_Within_Range_No_Char(int rangelow, int rangehigh, int input);
int is_element_in_array_same(int array[], int check_element, int arraysize);
int partition (int array[], int lowindex, int highindex);
void lockout_if_Condition_Not_Met(int trigger);
void quickSort(int array[], int lowindex, int highindex);
void headerdisplay(int stringsize, char message[stringsize+1]);
void display_Array(int array[], int arraysize, char arrayname[]);
void swap(int* a, int* b);

//Global variables - Having this as a global makes passing between functions MUCH easier to understand
int input_Num[NO_OF_INPUTS] = {0};
int frequency_of_Num[MAX_PREDEFINED_RANGE+1] = {0};

//Begin Main
int main(){
  int function_select;

  while(1){
    //Clears screen and displays header
    headerdisplay(20, "Lotto Game V3.1");

    printf("Please select one of the following options\n\n");
    printf("(1) - Number Input\n");
    printf("(2) - Display the contents of your chosen numbers\n");
    printf("(3) - Sorts the input array\n");
    printf("(4) - Check against the winning numbers\n");
    printf("(5) - Display the frequency of your chosen numbers (compiled each time option one completes)\n");
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
        input();
      break;

      //Display
      case 2:
        display();
      break;

      //Sort
      case 3:
        sort();
      break;

      //Check
      case 4:
        compare();
      break;

      //Frequency
      case 5:
        frequency();
      break;

      //End Program
      case 6:
        terminateProgram();
      break;

    }//End function_select switch
  }//End program while
}//End main


//Inputs a set of numbers tied to the size of LOTTO_NUM
void input(){
  int arraysize = sizeof(input_Num) / sizeof(*(input_Num+ 0));
  int input, display_i, i;
  char response;

  //Clears screen and displays header
  headerdisplay(20, "Lotto Game V3.1");

  //Checks if the input array is greater then 0, then askes if the user wishes to reset
  while (*(input_Num + 0) > 0){
    printf("Warning: This action will void the current input dataset, do you still wish to continue? y/n\n\a");
    scanf("%c", &response);
    while (getchar() !='\n');

    //Uses memset to void the array during runtime, if the user decides not to void the array. The user will be returned to the menu
    //Note: As a result, any inputs other then expected ones will send the user back to the menu, instant error checking!
    if (response == 'y' ){
      memset(input_Num, 0, sizeof(input_Num));
      headerdisplay(20, "Lotto Game V3.1");
    }//End response if

    else{
      system("cls");
      return;

    }//End else
  }//End input checker

printf("Please enter %d numbers between %d and %d\n",NO_OF_INPUTS, MIN_PREDEFINED_RANGE, MAX_PREDEFINED_RANGE);

  //Does this until all input slots are filled
  for(i=0;i<NO_OF_INPUTS;i++){

    //Used to display a human-friendly number for each iteration
    display_i = i+1;

    //Standard Input
    printf("(%d) ", display_i);
    scanf("%d", &input);
    while (getchar() !='\n');
    printf("\n");

    //Sanatizes the inputted number to make sure it is a integer and within the given range
    input = integer_Error_Checking_Within_Range_No_Char(MIN_PREDEFINED_RANGE, MAX_PREDEFINED_RANGE, input);

    //Checks to see if the inputted number is the same as any of the numbers in the array, prevents this
    while (is_element_in_array_same(input_Num, input, arraysize) == 1){
      printf("Error: You have entered the same number twice, please enter a different number\n\a");
      scanf("%d", &input);
      printf("\n");
      while (getchar() !='\n');
      input = integer_Error_Checking_Within_Range_No_Char(MIN_PREDEFINED_RANGE, MAX_PREDEFINED_RANGE, input);
    }//End check if the element is the same as any others check

    //Enters chosen number into array
    *(input_Num + i) = input;
    *(frequency_of_Num + input) = *(frequency_of_Num + input)+1;
    input = 0;

  }//End Input for
}//End Input


//Displays the contents of the input array
void display(){
  int arraysize = sizeof(input_Num) / sizeof(*(input_Num+ 0));

  //Clears screen and displays header
  headerdisplay(20, "Lotto Game V3.1");

  //Checks if option one has been completed, otherwise returns the user to the menu
  lockout_if_Condition_Not_Met(*(input_Num + 0));

  //Displays the input array
  display_Array(input_Num, arraysize, "Input Array");

}//End Display


//Sorts array
void sort(){
  int arraysize = sizeof(input_Num) / sizeof(*(input_Num+ 0));
  char response;

  //Clears screen and displays header
  headerdisplay(20, "Lotto Game V3.1");

  //Checks if option one has been completed, otherwise returns the user to the menu
  lockout_if_Condition_Not_Met(input_Num[0]);

  //Runs the quicksort algorithim, then returns the user back to the screen after two seconds
  quickSort(input_Num, 0, arraysize-1);

  //Asks user for response
  printf("Array Sorted, do you want to display the array? y/n\n");
  scanf("%c",&response);
  while (getchar() !='\n');

  //Checks the user input, I.E if they want to close the program
  if(response == 'y'){
    display();
  }//End

  else{
    main();
  }//End Else

}//End Sort


//Compares the input array with the winning numbers, then displays a points appropriate prize
void compare(){
  int arraysize = sizeof(input_Num) / sizeof(*(input_Num+ 0));
  int score = 0;
  register int i;

  //Clears screen and displays header
  headerdisplay(20, "Lotto Game V3.1");

  //Checks if option one has been completed, otherwise returns the user to the menu
  lockout_if_Condition_Not_Met(*(input_Num + 0));

  //Logic for comparing the input array and the winning numbers
  for(i=0;i<arraysize;i++){
    if(is_element_in_array_same(winningnumbers, *(input_Num + i), arraysize) == 1){
      score++;
    }//End
  }//End points checker

  //Function Select Switch
  switch (score){

    case 3:
      printf("You won a Cinema Pass!");
      sleep(2);
    break;

    case 4:
      printf("You won a Weekend Away!");
      sleep(2);
    break;

    case 5:
      printf("You won a New Car!");
      sleep(2);
    break;

    case 6:
      printf("You won the Jackpot!");
      sleep(2);
    break;

    default:
      printf("Sorry! You did not win anything");
      sleep(2);

  }//End function_select switch
}//End Compare


//Displays the frequency of entered numbers
void frequency(){
  int arraysize = sizeof(frequency_of_Num) / sizeof(*(frequency_of_Num+ 0));
  register int i;

  //Clears screen and displays header
  headerdisplay(20, "Lotto Game V3.1");

  //Checks if option one has been completed, otherwise returns the user to the menu
  lockout_if_Condition_Not_Met(*(input_Num + 0));

  //Displays frequency of entered numbers
  for (i=0;i<arraysize;i++){
    if (*(frequency_of_Num + i) > 0){
      printf("%d has been used %d times\n\n",i,*(frequency_of_Num + i));
    }//End check if above zero
  }//End display frequency for

  printf("\n\nPress enter to continue");
  getchar();

}//End Frequency


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
Inputs: 'trigger' or a element that would only be changed if data has been inputted
Outputs: An error if this is triggered

Description: When provided an accurate trigger, this will prevent the user from accessing a function if data was not entered
*/
void lockout_if_Condition_Not_Met(int trigger){
  while(trigger < 1){
    printf("Error: You have not inputted any data, please select option one\n\n\a");
    printf("Press enter to continue");
    getchar();
    main();

  }//End check if option one is completed check
}//End lockout


/*
Inputs: Size of message, message
Outputs: Standard header text

Description: Displays the same text every menu used, consistency looks good
*/
void headerdisplay(int stringsize, char message[stringsize+1]){
  system("cls");
  printf("----------------\n");
  printf("%s\n",message);
  printf("----------------\n\n");

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


/*
Inputs: The array, it's size and the element you wish to check if it is inside
Outputs: A boolean, 1 being "it is within array" 0 being "it is not within the array"

Description: When given an array, this will check if the given element is inside this array
*/
int is_element_in_array_same(int array[], int check_element, int arraysize){
  register int i;

  //Checkes target element against array
  for (i=0; i<arraysize ;i++){
    if (check_element == *(array + i)){
      return 1;
    }//End check if
  }//End array check

  return 0;

}//End parity check


/*
Inputs: The array you wish to display
Outputs: Displays the array to standard output

Description: When given an array, this will spit out a 'nicely' formatted array
*/
void display_Array(int array[], int arraysize, char arrayname[]){
  register int i;
  int display_i;

  printf("Contents of %s\n",arrayname);

  for (i=0;i<arraysize;i++){
    display_i = i+1;
    printf("(%d): %d  ",display_i, *(array + i));
  }//End display arrasize

  printf("\n\nPress enter to continue");
  getchar();

}//End display_Array


/*
Inputs: The two elements you wish to Swap
Ouputs: N/A

Description: A small utility designed to swap two values
*/
void swap(int* a, int* b){
  int t = *a;
  *a = *b;
  *b = t;

}//End Swap


/*
Inputs: The array itself, the highest index and the lowest index
Outputs: sorted value

Description: A pre-sort algorithim that takes the last element as a pivot, places that element in the 'correct' position
then places all smaller values to the left of the pivot. Leaving all greater values to the right of the pivot
(pivot being the median number of the array)

Note: This is based on an algorithim in Introduction to Algorithims by:
Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest and Clifford Stein (ISBN: 978-0-262-03384-8) (page 149)
*/
int partition (int array[], int lowindex, int highindex){
    //pivot
    int pivot = *(array + highindex);

    //Index of smaller element
    register int i = (lowindex - 1);

    for (int j = lowindex; j <= highindex- 1; j++){

        //If current element is smaller than the pivot
        if (*(array+ j) < pivot){

            //increment index of smaller element
            i++;
            swap(&*(array+ i), &*(array+ j));

        }//End smaller-than if
    }//End index for

    swap(&*(array + i + 1), &*(array + highindex));
    return (i + 1);

}//End partition


/*
Inputs: The array itself, the starting index, the last index
Outputs: N/A

Description: Using partition, this will quickily and efficiently sort from lowest to highest. This is achieved by recursivly running
the function partition until the last index is greater then the starting index.

Note: This is based on an algorithim in Introduction to Algorithims by:
Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest and Clifford Stein (ISBN: 978-0-262-03384-8) (page 149)
*/
void quickSort(int array[], int lowindex, int highindex){
  if (lowindex < highindex){
      //Pi being partitioning index, continues until the centrepoint of the array is at the right place
      int pi = partition(array, lowindex, highindex);

      //Recursivly Sorts before and after partition
      quickSort(array, lowindex, pi - 1);
      quickSort(array, pi + 1, highindex);

  }//End proc if
}//End Quicksort
