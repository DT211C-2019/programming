/*
Summary: Program that calculates the average age of a set of people.
*/

#include <stdio.h>
int main(){

int ages[5];
int sum = 0;
float average = 0;
int i;

//Enter five ages.
printf("Enter five numbers\n");
for (i = 0; i<5; i++){
  scanf("%d",&ages[i]);
  sum = sum + ages[i];

} //End for.

//Calculate average number.
average = (float)sum / 5;
printf("\nThe average of the five numbers is %.2f.", average);

return 0;
} //End main
