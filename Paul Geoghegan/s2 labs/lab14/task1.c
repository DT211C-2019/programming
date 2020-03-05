/*

*/

#include <stdio.h>

void square(int*);
void circle(float*);

int main()
{

	int side;
	float radius;

	printf("Please enter the length of 1 side of the square\n");
	scanf("%d", &side);

	printf("Please enter the radius of the circle\n");
	scanf("%f", &radius);

	square(&side);
	circle(&radius);

	printf("The area of the square is %d\n", side);
	printf("The area of the circle is %f\n", radius);

	return 0;
} //end main


//calculates the area of the square
void square(int *ptr)
{

	*ptr = *ptr * *ptr;

} //end square

//calculates the area of a circle
void circle(float *ptr)
{

	*ptr = (3.14 * *ptr)*(3.14 * *ptr);

} //end circle
