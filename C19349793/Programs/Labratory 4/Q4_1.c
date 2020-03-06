/*
Summary: To make an if/else statement a switch statement.
Date of last Modification: 14.10.19
Author: Saul Burgess
*/

#include <stdio.h>
int main(){
  char marriage_status;

  printf("This will translate marrital status keys to their full meanings.\n");
  scanf("%1s", &marriage_status);

  switch(marriage_status){

    case 'S':{
      printf("\nSingle");
      break;
    }

    case 'M':{
      printf("\nMarried");
      break;
    }

    case 'W':{
      printf("\nWidowed");
      break;
    }

    case 'E':{
      printf("\nSeperated");
      break;
    }

    case 'D':{
      printf("\nDivorced");
      break;
    }

    default:
    printf("\nError: Invalid Character");

  }

  return 0;

}
