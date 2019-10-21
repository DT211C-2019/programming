/*
Summary: To display the days of the week by using numbers.
Date of last Modification: 14.10.19
Author: Saul Burgess
*/

#include <stdio.h>
int main(){
  char day;

  printf("Pleas state 1-7 1 being Monday, 7 being Sunday.\n");
  scanf("%1s", &day);

  switch(day){

    case '1':{
      printf("\nMonday");
      break;
    }

    case '2':{
      printf("\nTuesday");
      break;
    }

    case '3':{
      printf("\nWednesday");
      break;
    }

    case '4':{
      printf("\nThursday");
      break;
    }

    case '5':{
      printf("\nFriday");
      break;
    }

    case '6':{
      printf("\nSaturday");
      break;
    }

    case '7':{
      printf("\nSunday");
      break;
    }
  }

  return 0;

}
