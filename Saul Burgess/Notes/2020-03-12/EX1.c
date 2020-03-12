/*
Summary: A program that describes structures
Author: Michael Collins
Date of Last Edit: 2020-03-12
Compiler: mingw (gcc)
*/

#include <stdio.h>

#define SIZE 5

struct student_rec {
  char firstname[11];
  char surname[21];
  int ID;
  int results[5];
};

//Function signature
void display(struct student_rec);


int main(){
  struct student_rec
    S1 = {"Jack", "Jones", 123, {50,61,71,80,53}};

  //Display structure
  display(S1);

  return 0;

}//End main


//Implement display()
void display(struct student_rec person){
  printf("Firstname is %s\n", person.firstname);
  printf("Surname is %s\n", person.surname);
  printf("ID is %d\n", person.ID);

  printf("Results are ");
  for(int i = 0; i<SIZE; i++){
    printf("%d", person.results[i]);
    //printf("%d", *(person.results+i)); // Pointer notation
  }//End results display

}//End display
