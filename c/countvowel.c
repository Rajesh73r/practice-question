/**
 * Count Vowels in a String (Strings & Loops)

 * Write a function that takes a string and returns the number of vowels (a, e, i, o, u).
 * Examples:

 * Input: "hello world"  
 * Output: 3  

 */
#include<stdio.h>
#include <string.h>

int main() {
    char st[40];
    int i, count = 0;

    printf("\n Enter a string: ");
    scanf("%s",&st);

    printf("\n Voiwel = ");

    for(int i = 0;i < strlen(st);i++){
        if(st[i] == 'a' || st[i] == 'e'|| st[i] == 'i' || st[i] == 'o' || st[i] == 'u'){
            count++;
            printf("%c",st[i]);
        }
    }
    printf("\n Number of Vowel in the string : %d",count);


    return 0;
}