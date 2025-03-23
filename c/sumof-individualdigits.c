//**find the sum of individual digits of a positive integer */
#include <stdio.h>

int main() {
    int number, sum = 0, digit;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    while (number > 0)
    {
        digit = number % 10;
        sum += digit;
        number /= 10;

        printf("The sum of the digits is: %d\n", sum);

        return 0;
    }
