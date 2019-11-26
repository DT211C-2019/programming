/*
Summary: Program that uses Dynamic Memory Address.
Author: Michael Collins
Date of Last edit: 2019-11-25
OS: Windows 10
Compiler: mingw (GCC)
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

  int *ptr;
  int noofnums;
  int noofbytes;
  int i;

  printf("Enter the number of numbers\n");
  scanf("%d", &noofnums);

  //Calculate the number of bytes required for the memory block.
  noofbytes = noofnums * sizeof(int);

  //Allocate memory required.
  ptr = (int*)malloc(noofbytes);

  //Check if allocation is successful.
  if (ptr == NULL){
    printf("Warning! Memory failed to allocate!\n");
  }//End if.

  else{
    //Enter Data into memory block.
    for (i=0;i<noofnums;i++){
      scanf("%d", &*(ptr+i));
    }//End for.

    for(i=0;i<noofnums;i++){
      printf("%d\n", *(ptr+i));
    }//End for.

    //Release memory block.
    free(ptr);
  }//End Else.

return 0;
}//End Main.
