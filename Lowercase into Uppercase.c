#include <stdio.h>
char convertToUpperCase(char ch) 
{
    if (ch >= 'a' && ch <= 'z') 
{
    return ch - ('a' - 'A');
    } else 
{
    return ch;
    }
}

int main() 
{
    char lowercaseChar, uppercaseChar;
    printf("Enter a lowercase character: ");
    scanf(" %c", &lowercaseChar);
    uppercaseChar = convertToUpperCase(lowercaseChar);
    printf("Uppercase equivalent: %c\n", uppercaseChar);
    return 0;
}
