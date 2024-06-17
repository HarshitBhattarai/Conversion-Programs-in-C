#include <stdio.h>
void decimalToBinary(int decimal) 
{
    if (decimal == 0) {
    printf("Binary equivalent is: 0\n");
    return;
    }
    int binary = 0;
    int place = 1;  
    while (decimal > 0) {
    int bit = decimal % 2;         
    binary = binary + bit * place; 
    decimal = decimal / 2;       
    place = place * 10; 
    }
    printf("Binary equivalent is: %d\n", binary);
}

int main() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    decimalToBinary(decimal);
    return 0;
}
