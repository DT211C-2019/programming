/*
Summary: Program using calloc() to dynammically allocate memory.
Author: Michael Collins
Date of Last Edit: 2019-11-26
Compiler: mingw (gcc)
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int *ptr;
  int no_of_nums;
  //int no_of_bytes; //Unnessary, as Calloc does this automatically.
  int i;

  printf("Enter the number of numbers\n");
  scanf("%d", &no_of_nums);

  //Do not need to calculate no.bytes required.
  //calloc() does this

  //Allocate Memory.
  ptr = calloc(no_of_nums, sizeof(int));

  //Check if memory allocation is successful.
  if (ptr == NULL){
    printf("Failed to allocate memory.\n");
  }//End If.
  else{ //Did allocate successfully.
    for(i=0;i<no_of_nums;i++){
      scanf("%d", &*(ptr+i));
    }//End For.

    for(i=0;i<no_of_nums;i++){
      printf("%d\n", *(ptr+i));
    }//End for.

    free(ptr);
  }//End Else.

  return 0;
}//End Main.
