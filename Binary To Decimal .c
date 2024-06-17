#include <stdio.h>
#include <math.h>
int binaryToDecimal(long long binary) 
{
    int decimal = 0, exponent = 0;
    while (binary != 0) {
    int digit = binary % 10;  
    decimal += digit * pow(2, exponent); 
    binary = binary / 10;
    exponent++;                
    }
    return decimal;
}
int main() {
    long long binaryNumber;
    printf("Enter a binary number: ");
    scanf("%lld", &binaryNumber);
    int decimalNumber = binaryToDecimal(binaryNumber);
    printf("Decimal equivalent is: %d", decimalNumber);
    return 0;
}
