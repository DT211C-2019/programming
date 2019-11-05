// Program that uses a while loop.

#include <stdio.h>

int main()
{
  int num, total;
  num = total = 0;

  // While number is greater then zero.

  while(num >= 0)
  {
    printf("Enter any positive number\n");
    scanf("%d, &num");

    // Keep a running total.
    total = num + total;
  } // End while.

  printf("\nThe total of numbers entered is %d", total);
  return 0;
}
