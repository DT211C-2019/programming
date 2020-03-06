/*
Summary: Program that demonstrates realloc().
Author: Michael Collins
Date of Last Edit: 2019-12-02
Compiler: mingw (gcc)
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int *ptr;
  int no_of_bytes;
  int no_nums;
  int i;
  char answer;
  int new_nums;

  printf("Enter number of numbers\n");
  scanf("%d",&no_nums);

  //Calculate size of block required in bytes.
  no_of_bytes = no_nums * sizeof(int);

  //Allocate memory block.
  ptr = malloc(no_of_bytes);

  //Check if memory allocated successfully.
  if (ptr == NULL){
    printf("Failed to allocate memory");
  }// End if.

  else {
    //Enter in data.
    for(i=0;i<no_nums;i++){
      scanf("%d", &*(ptr+i));
    }//End for.

    printf("\nAny extra numbers? (y/n)\n");
    scanf("%c",&answer);

    if(answer == 'n'){
      printf("\nOk, all data entered");

    }//End if.

    else{
      printf("How many extra numbers to enter?\n");
      scanf("%d",&new_nums);

      //Calculate total size of new block.
      no_of_bytes = no_of_bytes + (no_nums * sizeof(int));

      //Change size of block.
      realloc(ptr, no_of_bytes);

      //Enter additional number.
      for(i=no_nums;i<(no_nums+new_nums);i++){
        scanf("%d",&*(ptr+i));
      }//End for.


    }//End Else.
  }//End Else.
  return EXIT_SUCCESS;
}//End Main.
