/**
 * Find the Largest Number (Arrays)

 * Write a function that takes an array of numbers as input and returns the largest number in the array.
 * Example:
 * Input: [4, 7, 1, 9, 3] → Output: 9
 */

#include <stdio.h>

int main()
{

    int array[] = {3, 7, 8, 9, 7, 2};
    int lenth = 6;
    int largest = array[0];
    for (int i = 0; i < lenth; i++)
    {
        if (largest < array[i])
        {
            largest = array[i];
        }
    }
    printf("%d", largest);

    return 0;
}