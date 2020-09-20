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

  struct student_rec
    stu1 = {"Mary", "Smith", 4567, {2,4,6,7,10}};





}//End Main
