//*C program to find the Sum of Array Elements* */

#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    


    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    
    printf("The sum of the array elements is: %d\n", sum);

    return 0;
}
