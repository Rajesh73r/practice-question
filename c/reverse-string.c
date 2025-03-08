/**
 * Reverse a String (Strings & Loops)
 *
 * Write a function that takes a string as input and returns the reversed version of the string.
 * Example:
 * Input: "hello" → Output: "olleh"
 */

#include <stdio.h>
#include <string.h>

void reverseString(char *, int);

int main()
{
    char str[100];
    printf("enter a string: ");
    scanf("%s", str);
    int length = strlen(str);

    reverseString(str, length);
    printf("%s", str);

    return 0;
}

void reverseString(char *str, int size)
{
    int left, right;
    char temp;
    for (int i = 0; i < size / 2; i++)
    {
        left = i;
        right = size - 1 - i;

        temp = str[left];
        str[left] = str[right];
        str[right] = temp;
    }
}
