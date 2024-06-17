#include <stdio.h>
char convertToLowerCase(char ch) 
{
    if (ch >= 'A' && ch <= 'Z') 
	{
    return ch + ('a' - 'A');
    } else 
	{
    return ch;
    }
}

int main() {
    char uppercaseChar, lowercaseChar;
    printf("Enter an uppercase character: ");
    scanf(" %c", &uppercaseChar);
    lowercaseChar = convertToLowerCase(uppercaseChar);
    printf("Lowercase equivalent: %c", lowercaseChar);
    return 0;
}
