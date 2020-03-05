/*
Summary: A program that describes structures
Author: Saul Burgess
Date of Last Edit: 2020-02-27
Compiler: mingw (gcc)
*/

#include <stdio.h>
#include <string.h>

#define SIZE 5

//Structure Templates
struct student_rec{
  char firstname[11];
  char surname[21];
  int id;
  int results[5};
};

//Function signatures (protottypes)
//insert stuff here

int main(){

  int i;
  //Create two variables of student rec
  struct student_rec stu1, stu2;
  stu1.id = 1234;
  strcpy(stu1.firstname, "Joe");
  strcpy(stu1.surname, "Blogs");

  for(i=0;i<SIZE;i++){
    scanf("%d",&stu1.results[i]);
  }//End main

}//End main
