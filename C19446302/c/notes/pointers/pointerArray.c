#include <stdio.h>

#define LENGTH 5

int main()
{

    int *ptrs[LENGTH];
    int nums[LENGTH];
    int i;

    for (i = 0; i < LENGTH; i++)
    {

        ptrs[i] = &nums[i];
    }

    for (i = 0; i < LENGTH; i++)
    {

        printf("Enter #%d: ", i + 1);
        scanf(" %d", ptrs[i]);

        while (getchar() != '\n')
        {
        }
    }

    for (i = 0; i < LENGTH; i++)
    {

        printf("Number #%d = %d\n", i + 1, nums[i]);
    }
}