/*
Summary: A program that used DMA to allocate memory for 5 floating point numbers.
Author: Saul Burgess
Date of Last Edit: 2020-01-30
Compiler: mingw (gcc)
*/

#include <stdio.h>
#include <stdlib.h>

#define NOOFNUMS 5

int main(){
  float *ptr;
  int i;
  int noofbytes;

  //Bytes
  noofbytes = NOOFNUMS * sizeof(int);
  ptr = (float*)malloc(noofbytes);

  //Check if allocation is successful.
  if (ptr == NULL){
    printf("Warning! Memory failed to allocate!\n");
  }//End if.

  else{
    //Enter Data into memory block.
    for (i=0;i<NOOFNUMS;i++){
      scanf("%f", &*(ptr+i));
    }//End for.


    for(i=0;i<NOOFNUMS;i++){
      printf("%f\n", *(ptr+i));
    }//End for.

    free(ptr);
  }//End else.

  return 0;
}//End Main.
