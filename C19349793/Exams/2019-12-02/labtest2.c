/*
Summary: To copy the contents of "Barrack" into "Michelle", then replace the empty characters with "_", then print.
Author: Saul Burgess
Date of Last Edit: 2019-12-02
Compiler: mingw (gcc)
*/

//Standard 'stdio.h' nothing fancy or special.
#include <stdio.h>

//Defines the maximum numbers in the arrays, there's so many 10's here. Makes it easier for me.
#define MAX 10

//Begins main.
int main(){
  //Initialises the array Barack and Michelle and also initialised the initger I.
  char barack[MAX]={'Y','E','S',' ','W','E',' ','C','A','N'};
  char michelle[MAX];
  int i;


  //Part 1.
  //Inputs the contents of Barrack into Michelle using pointer notation.
  for(i=0;i<MAX;i++){
    *(michelle + i) = *(barack + i);
  }//End translocation for.


  //Part 2.
  //Replaces blank spaces in the Michelle array with the underline character.
    for(i=0;i<MAX;i++){
      if(*(michelle + i) == ' '){
        *(michelle + i) = '_';
      }//End checker if.
    }//End checker for.


  //Part 3.
  //Prints the contents of Michelle to the terminal.
  for(i=0;i<MAX;i++){
    printf("%c", *(michelle + i));
  }//End print/display for.

return 0;
}//End Main.
