#include <stdio.h>
float milesToKilometers(float miles) 
{
    return miles * 1.60;
}
int main() {
    float miles, kilometers;
    printf("Enter distance in miles: ");
    scanf("%f", &miles);
    kilometers = milesToKilometers(miles);
    printf("%2f miles = %2f kilometers", miles, kilometers);

    return 0;
}
