// Program that uses a do-while loop.

#include <stdio.h>

int main()
{
  int num, total;
  num = total = 0;

  // While number is greater then zero.

  do{
    printf("Enter any positive number\n");
    scanf("%d, &num");

    // Keep a running total.
    total = num + total;
  } // End do.
  while(num >= 0);

  printf("\nThe total of numbers entered is %d", total);
  return 0;
}
