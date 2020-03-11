/*
Summary: A program that describes structures
Author: Saul Burgess
Date of Last Edit: 2020-03-11
Compiler: mingw (gcc)
*/

#include <stdio.h>
#include <string.h>

struct student_rec{
  char firstname[11];
  char surname[21];
  int ID;
  int results[5];
};

int main(){
  int i;

  struct student_rec stu1, stu2;

  printf("Enter stu1 firstname\n");
  gets(stu1.firstname);
  scanf("%s",stu1.firstname);

  for (i=0;i<5;i++){
    scanf("%d",&stu1.results[5]);
  }//End for

  //Enter stu2 details/data
  stu2.ID = 1234;
  //stu2.firstname = "Joe"; //Does not work, you NEED a stringcpy
  strcpy(stu2.firstname, "Joe");
}//End Main
