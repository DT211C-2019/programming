/*
Summary: to create a switch program that displays a message if the statement is a vowel, and a seperate statement if it is not.
Date of last Modification: 14.10.19
Author: Saul Burgess
*/

#include <stdio.h>
int main(){
  char vowel;

  printf("Please enter a vowel.\n");
  scanf("%1s", &vowel);

  switch(vowel){

    case 'A':{
      printf("\nYou entered in the vowel A");
      break;
    }

    case 'E':{
      printf("\nYou entered in the vowel E");
      break;
    }

    case 'I':{
      printf("\nYou entered in the vowel I");
      break;
    }

    case 'O':{
      printf("\nYou entered in the vowel O.");
      break;
    }

    case 'U':{
      printf("\nYou entered in the vowel U.");
      break;
    }

    default:
    printf("\nYou have not entered in a vowel.");

  }

  return 0;

}
