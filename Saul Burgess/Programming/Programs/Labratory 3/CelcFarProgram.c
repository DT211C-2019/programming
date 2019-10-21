/*
Summary: Faranheit to Celcius

Date last modified: 07.10.19
Author: Saul Burgess
*/

#include <stdio.h>

int main(){

    float num;
    float ans;
    float select;

    printf("Please insert a celcius or faranheit number, press enter when ready.\n");
    scanf("%f", &num);
    printf("Please select 0 for F-C conversion or 1 for C-F conversion.\n");
    scanf("%f", &select);

    if (select == 0)
    {
        ans = (num - 32) * 5/9;
        printf("\nYou selected the Far to Celc conversion, the answer is: %f", ans);
    }
    else
    {
        ans = (num * 9/5) + 32;
        printf("\nYou selected the Celc to Far conversion, the answer is: %f", ans);
    }

    getchar();
    return 0;
}
