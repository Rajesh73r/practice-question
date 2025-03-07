/**
 * Factorial Calculation (Recursion)

 * Write a function that calculates the factorial of a given number using recursion.
 * Example:
 * Input: 5 → Output: 120
 */

 #include <stdio.h>

 int main() {
    int factorial = 1,n;
    printf("enter a number");
    scanf ("%d",&n);

    for(int i = 1;i<=n;i++){
        factorial = factorial * i;
        
    }
     printf("%d",factorial);

    return 0;
 }