/* 
Summary: To calculate the volume and surface area of a box.

Date last modified: 30.09.19
Author: Saul Burgess 
*/

#include <stdio.h>

int main()
{
	int Height = 10;
    float Length = 11.5;
    float Width = 2.5;
    float Volume;
    float SurfaceArea;
    
    
    Volume = Length * Width * Height;
	SurfaceArea = ((Width * Height) * 2) + ((Length * Height) * 4);
    
    
	printf("Cube volume is equal to %4.1fcm3.\nSurface area is equal to %4.1fcm2.", Volume, SurfaceArea);

    
	getchar();
	return 0;
}