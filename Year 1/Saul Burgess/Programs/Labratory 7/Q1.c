/*
Summary: To display what is in option 8 of an array.
Date of Last Edit: 10/11/19
Compiler: GCC (mingw)
OS: Windows 10
*/

#include <stdio.h>

int main(){

  int i;
  int a[100];

  for (i=0; i<10; i++){
    a[i] = 9 - i;
  }//End for.
  for (i=0); i<10; i++){
    a[i]=a[ a[i] ];
  }// End for.
  printf("The answer is %d",a[8]);
}//End Main.
