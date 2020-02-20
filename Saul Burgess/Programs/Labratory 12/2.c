/*
Summary: A progam that allows the user to chose a character and a number of repeats; to display
Author: Saul Burgess
Date of Last Edit: 2020-02-06
Compiler: mingw (gcc)
*/

//Libraries used
#include <stdio.h>

//Function prototypes
void chardisplay(char character, int repeats);


int main(){
  char inputchar;
  int inputrepeat;
  printf("Please enter a character\n");
  scanf("%c", &inputchar);
  printf("How many times would you like to repeat that?\n");
  scanf("%d", &inputrepeat);
  chardisplay(inputchar,inputrepeat);
}//End main


//Function that prints a given character, a chosen amount of times
void chardisplay(char character, int repeats){
  int i;
  for (i=0;i<repeats;i++){
    printf("%c", character);
  }//End for
}//End chardisplay
