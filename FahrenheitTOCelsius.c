#include <stdio.h>
float fahrenheitToCelsius(float fahrenheit) 
{
    return (fahrenheit - 32) * 5 / 9;
}

int main() 
{
    float fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = fahrenheitToCelsius(fahrenheit);
    printf("%.2f Fahrenheit = %.2f Celsius", fahrenheit, celsius);
    return 0;
}
