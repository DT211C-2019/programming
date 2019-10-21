/* 
Summary: To calculate the volume with a cube of the same dimensions. 

Date last modified: 30.09.19
Author: Saul Burgess 
*/

#include <stdio.h>

int main()
{
    float LWH = 2.8;
    float ans;
    
    
    ans = LWH * LWH * LWH;
    
    
    printf("The volume of the cube is %fm3", ans);
    
	getchar();
	return 0;
}