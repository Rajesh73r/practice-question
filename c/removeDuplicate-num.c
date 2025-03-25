/**
 * Write a function that removes duplicate numbers from a list and returns a new list with unique values.
 * Examples:

 * Input: [1, 2, 2, 3, 4, 4, 5]  
 * Output: [1, 2, 3, 4, 5]  

 * Input: [10, 10, 10, 10]  
 * Output: [10]  

 * Input: [5, 3, 8, 3, 5, 9]  
 * Output: [5, 3, 8, 9]
 */
#include <stdio.h>

int removeDup(int arr[], int n) {
    if (n == 0) return 0;
  
    int j = 0;
    for (int i = 1; i < n - 1; i++) {

        if (arr[i] != arr[j])
            arr[++j] = arr[i];
    }
  
    return j + 1;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5,3,5,7,7}; 
    int n = 12;

    n = removeDup(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
