/*
Summary: To create a program that validates a triangle.
Date of last Modification: 14.10.19
Author: Saul Burgess
*/

#include <stdio.h>
int main(){

  int s1;
  int s2;
  int s3;

  printf("Please state the length of the first side.\n");
  scanf("%d",&s1);

  printf("Please state the length of the second side.\n");
  scanf("%d",&s2);

  printf("Please state the length of the third side.\n");
  scanf("%d",&s3);

  if ((s1 * s2 == s3) || (s2 * s3 == s1) || (s1 * s3 == s2)){
    printf("\nThis is a valid triangle.");
  }// End if.
  else{
    printf("This is not a valid triangle.");
  }// End else.

  return 0;
}// End main.
