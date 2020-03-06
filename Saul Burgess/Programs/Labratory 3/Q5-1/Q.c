/* 
Summary: To debug some example code. 

Date last modified: 07.10.19
Author: Saul Burgess 
*/

#include <stdio.h>

int main(){
    
    float num; //An int was defined instead of a float, a float is called in the latter code.
    
    
    printf("Please type a number followed by Enter\n"); //\n not included.
    scanf("%f", &num); //The & was forgotten. In addition to "num1" being called "num".
    printf("The number you typed was: %d", num1);
    
    
    return 0;
}

    