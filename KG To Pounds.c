#include <stdio.h>
float kilogramsToPounds(float kilograms) 
{
    return kilograms * 2.2;
}
int main() {
    float kilograms, pounds;
    printf("Enter weight in kilograms: ");
    scanf("%f", &kilograms);
    pounds = kilogramsToPounds(kilograms);
    printf("%2f kilograms = %2f pounds", kilograms, pounds);

    return 0;
}
