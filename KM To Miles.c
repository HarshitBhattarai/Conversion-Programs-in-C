#include <stdio.h>
float kilometersToMiles(float kilometers) 
{
    return kilometers * 0.621;
}
int main() {
    float kilometers, miles;
    printf("Enter distance in kilometers: ");
    scanf("%f", &kilometers);
    miles = kilometersToMiles(kilometers);
    printf("%2f kilometers = %2f miles", kilometers, miles);
    return 0;
}
