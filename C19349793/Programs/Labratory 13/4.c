/*
Summary: A program that demonstrates function use by returning the most commonly used character
Author: Saul Burgess
Date of Last Edit: 2020-02-13
Compiler: mingw (gcc)
*/

#include <stdio.h>
#include <string.h>

//Prototypes
int HighestOf (char input[]);


int main(){
  char input[100];
  int print;
  int i;

  //Asks user for a set of numbers
  for (i=0;i<3;++i){
    printf("Please enter a character\n");
    scanf("%c",&input[i]);
    getchar();
  }//End input for

  //Calls HighestOf then prints
  print = HighestOf(input);
  printf("The highest value of the given numbers is %d",print);

}//End Main


//When given a set of numbers, it will return the highest of these numbers
int HighestOf (char input[]){
  int c=0, count[26] = {0}, x, max, i;

  while (input[c] != '\0') {
  /** Considering characters from 'a' to 'z' only and ignoring others. */
  if (input[c] >= 'a' && input[c] <= 'z') {
    x = input[c] - 'a';
    count[x]++;
  }
}

  max = count[x];
  for (i = 1; i < 26; i++){
    if (count[i] > max) {
      max = count[i]; 
    }//End if
  }//End for

  return max;
}//End HighestOf
