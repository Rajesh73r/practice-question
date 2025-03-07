/**
 *  Write a program that:
 * 	1.	Takes an integer n as input, representing the size of an array.
 * 	2.	Takes n numbers as input and stores them in an array.
 * 	3.	Prints all elements in the array.
 */

#include <stdio.h>

int main()
{

    int size;
    int arr[100];
    printf("enter a size of array:");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]=", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}