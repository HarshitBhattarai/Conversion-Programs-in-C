#include <stdio.h>
float poundsToKilograms(float pounds) 
{
    return pounds * 0.45;
}

int main() {
    float pounds, kilograms;
    printf("Enter weight in pounds: ");
    scanf("%f", &pounds);
    kilograms = poundsToKilograms(pounds);
    printf("%.2f pounds = %.2f kilograms", pounds, kilograms);
    return 0;
}
