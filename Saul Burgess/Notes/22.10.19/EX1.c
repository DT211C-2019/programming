//Program to find the higest and lowest of a set of numbers.

#include <stdio.h>
int main(){

  int numbers[5];
  int i;
  int high, low;
  int tmp;


  //Enter data into the array.
  printf("Enter five numbers\n");
  for(i=0;i<5;i++){
    scanf("%d,numbers[i]");
  }//End For.


  //Assume first element is the lowest AND highest.
  low = numbers[0];
  high = numbers[0];


  for(i=0,i<5.i++){
    if(low>number[i]){
      low = number[i];
    }//End If.


    if(high<numbers[i]){
      high = numbers[i];
    }//End If.

  }//End For.

  printf("\nThe high is %d",high);
  printf("\nThe low is %d", low);

}// End Main.
