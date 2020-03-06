/*
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Summary: A program which plays a lotto game with a predetermined set of mumbers. The program will allow entry of six numbers, display these in a 1D array with pointer notation, sort the contents of the array
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

//Option Prototypes
void input();
void display();
void sort();
void compare();
void frequency();
void terminateProgram();

//Utility Prototypes
int intiger_Error_Checking_Within_Range_No_Char(int rangelow, int rangehigh, int input);
int is_element_in_array_same(int array[], int check_element, int arraysize);
int partiton (int array[], int lowindex, int highindex);
void quickSortAlg(int array[], int lowindex, int highindex);
void display_Array(int array[], int arraysize, char arrayname[]);
void swap(int* a, int* b);
void displayStandardHeader();

//Global variables - Having this as a global makes passing between functions MUCH easier to understand
int input_Num[NO_OF_INPUTS] = {0};
int frequency_of_Numbers[43] = {0};

//Begin Main
int main(){

  int function_select;

  while(0 == 0){

    //Menu Display
    displayStandardHeader();
    printf("Please select one of the bellow options\n\n");
    printf("(1) - Number Input\n");
    printf("(2) - Display the contents of your chosen numbers\n");
    printf("(3) - Sort, then display your chosen numbers in ascending order\n");
    printf("(4) - Check against the winning numbers\n");
    printf("(5) - Display the frequency of your chosen numbers (compiled each time option one completes)\n");
    printf("(6) - End program\n");

    //Menu Select
    scanf("%d", &function_select);
    while (getchar() !='\n');
    printf("\n");
    function_select = intiger_Error_Checking_Within_Range_No_Char(1, 6, function_select);

    //Function Select Switch
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

    //Clears the screen after a sucessful loop
    system("cls");
  }//End program while
}//End main


//Inputs a set of numbers tied to the size of LOTTO_NUM
void input(){

  int i;
  int arraysize = sizeof(input_Num) / sizeof(input_Num[0]);
  int input;
  int display_i;
  char response = 'n';

  //Clears the screen for neatness reasons
  system("cls");
  displayStandardHeader();

  //Checks if the input array is greater then 0, then askes if the user wishes to reset
  while (input_Num[0] > 0){
    printf("Warning: This action will void the current input dataset, do you still wish to continue? y/n\n\a");
    scanf("%c", &response);
    while (getchar() !='\n');

    //Uses memset to void the array during runtime, if the user decides not to void the array. The user will be returned to the menu
    //Note: As a result, any inputs other then expected ones will send the user back to the menu, instant error checking!
    if (response == 'y' ){
      memset(input_Num, 0, sizeof(input_Num));
      system("cls");
      displayStandardHeader();
    }//End response if

    else{
      system("cls");
      return;
    }//End else
  }//End input checker

printf("Please enter %d numbers between 1 and 42\n",NO_OF_INPUTS);

  //Does this until all input slots are filled
  for(i=0;i<NO_OF_INPUTS;i++){

    //Used to display a human-friendly number for each iteration
    display_i = i+1;

    //Standard Input
    printf("(%d) ", display_i);
    scanf("%d", &input);
    while (getchar() !='\n');
    printf("\n");

    //Sanatizes the inputted number to make sure it is a intiger and within the given range
    input = intiger_Error_Checking_Within_Range_No_Char(1, 42, input);

    //Checks to see if the inputted number is the same as any of the numbers in the array, prevents this
    while (is_element_in_array_same(input_Num, input, arraysize) == 1){
      printf("Error: You have entered the same number twice, please enter a different number\n\a");
      scanf("%d", &input);
      while (getchar() !='\n');
      printf("\n");
      input = intiger_Error_Checking_Within_Range_No_Char(1, 42, input);
    }//End check if the element is the same as any others check

    //Enters chosen number into array
    input_Num[i] = input;

    //Incrememnts the frequency array
    frequency_of_Numbers[input]++;
  }//End Input for
}//End Input


//Displays the contents of the input array
void display(){
  int arraysize = sizeof(input_Num) / sizeof(input_Num[0]);

  //Clears the screen for neatness
  system("cls");
  displayStandardHeader();

  //Checks if option one has been completed, otherwise returns the user to the menu
  while(input_Num[0] < 1){
    printf("Error: You have not inputted any data, please select option one.\n\n\a");
    printf("Press enter to continue");
    getchar();
    return;
  }//End check if option one is completed check

  system("cls");
  displayStandardHeader();
  display_Array(input_Num, arraysize, "Input Array");
}//End Display


//Sorts the array
void sort(){

  //Clears screen for neatness
  system("cls");
  displayStandardHeader();

  int arraysize = sizeof(input_Num) / sizeof(input_Num[0]);
  char response;

  //Checks if option one has been completed, otherwise returns the user to the menu
  while(input_Num[0] < 1){
    printf("Error: You have not inputted any data, please select option one.\n\n\a");
    printf("Press enter to continue");
    getchar();
    return;
  }//End check if option one is completed check

  //Clears screen for neatness
  system("cls");
  displayStandardHeader();

  //Calls the quicksortAlg
  quickSortAlg(input_Num, 0, NO_OF_INPUTS-1);

  printf("Array Sorted:\nDo you want to display the sorted array? y/n\n\n");
  printf("Note: You can also display this from the main menu\n");
  scanf("%c", &response);

  //Checks if the user wishes to display the array
  if(response == 'y'){
    system("cls");
    displayStandardHeader();
    display_Array(input_Num, arraysize, "Input Array");
    getchar();
  }//End display
  else{
    return;
  }//End return
}//End Sort


//Compares the input_Num array to LOTTO_NUM, then tells the 'player' what they have won
void compare(){

  int arraysize = sizeof(input_Num) / sizeof(input_Num[0]);
  int lotto_Num[NO_OF_INPUTS] = {1, 3, 5, 7, 9, 11};
  int i;
  int score = 0;

  //Clears screen for neatness
  system("cls");
  displayStandardHeader();

  //Checks if option one has been completed, otherwise returns the user to the menu
  while(input_Num[0] < 1){
    printf("Error: You have not inputted any data, please select option one.\n\n\a");
    printf("Press enter to continue");
    getchar();
    return;
  }//End check if option one is completed check

  for (i=0;i<NO_OF_INPUTS;i++){
    if(is_element_in_array_same(input_Num, lotto_Num[i], arraysize) == 1){
      score++;
    }//End checker if
  }//End Checker for

  switch (score){

    //Checks score against potential winnings
    case 3:
      printf("Congratulations on getting 3 correct, you won a Cinema Pass!\n\n");
      printf("Press enter to continue");
      getchar();
    break;

    case 4:
    printf("Congratulations on getting 4 correct, you won a Weekend Away!\n\n");
      printf("Press enter to continue");
      getchar();
    break;

    case 5:
      printf("Congratulations on getting 5 correct, you won a New Car!\n\n");
      printf("Press enter to continue");
      getchar();
    break;

    case 6:
      printf("Congratulations on getting all 6 correct, you won !!THE JACKPOT!!\n\n");
      printf("Press enter to continue");
      getchar();
    break;

    default:
      printf("Sorry! You did not win anything, please try again!\n\n");
      printf("Press enter to continue");
      getchar();
  }//End Switch
}//End Compare


//Counts the number of times a number has been used, and displays it
void frequency(){
  int i;
  int arraysize = sizeof(frequency_of_Numbers) / sizeof(frequency_of_Numbers[0]);

  //Clears the screen for neatness
  system("cls");
  displayStandardHeader();

  printf("The frequency of all entered items: '(No): Frequency'\n");

  for(i=0; i<arraysize; i++){
    if(frequency_of_Numbers[i] > 0){
      printf("(%d): %d  ", i, frequency_of_Numbers[i]);
    }//End checker if
  }//End frequency for

  printf("\n\nPress enter to continue");
  getchar();
}//End frequency


//Terminates the program
void terminateProgram(){

  //Clears the screen for neatness
  system("cls");
  displayStandardHeader();

  //Terminates the program using the exit function
  printf("The program will now shut down, goodbye!");
  sleep(1);
  exit(EXIT_SUCCESS);
}//End terminate program


/*
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Utility Functions
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/


/*
Inputs: N/A
Outputs: Standard display for this program

Description: Displays the below printf
*/
void displayStandardHeader(){
  printf("-----------------\n");
  printf("Lotto Game: V3.31\n");
  printf("-----------------\n\n");
}//End displayStandardHeader


/*
Inputs: The high and low of the chosen range and the number to check
Outputs: The checked input, determined to be a intiger within the range

Description: When given a high and low range, this will detect if the user has given a number outside that range, or has given a character. It will then prompt re-entry
*/
int intiger_Error_Checking_Within_Range_No_Char(int rangelow, int rangehigh, int input){

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
int i;

//Checkes target element against array
for (i=0; i<arraysize ;i++){
  if (check_element == array[i]){
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
  int i;
  int display_i;

  printf("Contents of %s\n",arrayname);

  for (i=0;i<arraysize;i++){
    display_i = i+1;
    printf("(%d): %d  ",display_i, array[i]);
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
Ouputs: sorted value

Description: A pre-sort algorithim that takes the last element as a pivot, places that element in the 'correct' position
then places all smaller values to the left of the pivot. Leaving all greater values to the right of the pivot
(pivot being the median number of the array)

Note: This is based on an algorithim in Introduction to Algorithims by:
Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest and Clifford Stein (ISBN: 978-0-262-03384-8) (page 149)
*/
int partiton (int array[], int lowindex, int highindex){
    //pivot
    int pivot = array[highindex];

    //Index of smaller element
    int i = (lowindex - 1);

    for (int j = lowindex; j <= highindex- 1; j++){

        //If current element is smaller than the pivot
        if (array[j] < pivot){

            //increment index of smaller element
            i++;
            swap(&array[i], &array[j]);

        }//End smaller-than if
    }//End index for

    swap(&array[i + 1], &array[highindex]);
    return (i + 1);
}//End partition


/*
Inputs: The array itself, the starting index, the last index
Ouputs: N/A

Description: Using partition, this will quickily and efficiently sort from lowest to highest. This is achieved by recursivly running
the function partition until the last index is greater then the starting index.

Note: This is based on an algorithim in Introduction to Algorithims by:
Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest and Clifford Stein (ISBN: 978-0-262-03384-8) (page 149)
*/

void quickSortAlg(int array[], int lowindex, int highindex){
  if (lowindex < highindex){

    //Partition Indexing
    int partindex = partiton(array, lowindex, highindex);

    //recursive algorithim to seperatly sort elements before partition and after partition
    quickSortAlg(array, lowindex, partindex - 1);
    quickSortAlg(array, partindex + 1, highindex);

  }//End low/high index checker
}//End quickSort
