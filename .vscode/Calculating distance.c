#include <stdio.h>

int main() 
{
    float D, m, f, i, c;

    printf("Enter the distance in kilometers: ");
    scanf("%f", &D);

    printf("Your distance in KM is: %f\n", D);
    
    m = D * 1000;
    printf("Your distance in meters is: %f\n", m);

    f = m * 3.28084;
    printf("Your distance in feet is: %f\n", f);

    i = f * 12;
    printf("Your distance in inches is: %f\n", i);

    c = i * 2.54;
    printf("Your distance in centimeters is: %f\n", c);

    return 0;
}
