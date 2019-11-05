/* 
Summary: To calculate the heartbeat of a human being via a formula.

Date last modified: 07.10.19
Author: Saul Burgess 
*/

#include <stdio.h>

int main(){
    
    int age;
    int totalHRTBT;
    int HRTBT = 75;
    
    
    printf("Please type your age, and press Enter\n");
    scanf("%d", &age);
    flushall();
    
    totalHRTBT = (((HRTBT * 60) * 24) * 365) * age;
    printf("The total heartbeats are %d", totalHRTBT);
    
    getchar();
    return 0;
}
    
    