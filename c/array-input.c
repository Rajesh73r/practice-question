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