/**
 * Reverse an array
 * Write a function that takes an array as an input and reverses the array. Then print it.
 *
 * Example:
 * Input:
 * Size = 5
 * [1,2,3,4,5]
 * Output:
 * [5,4,3,2,1]
 */

#include <stdio.h>

void reverseArray(int[], int);
void printArray(int[], int);

int main()
{
    int array[] = {1, 2, 3, 4, 5,9};
    int size = 6;

    reverseArray(array, size);

    printArray(array, size);

    return 0;
}

void reverseArray(int arr[], int size)
{
    int temp, left, right;
    for (int i = 0; i < size / 2; i++)
    {
        left = i;
        right = size - 1 - i;

        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if(i == 0)
            printf("%d", arr[i]);
        else
            printf(", %d", arr[i]);
    }
    
}
