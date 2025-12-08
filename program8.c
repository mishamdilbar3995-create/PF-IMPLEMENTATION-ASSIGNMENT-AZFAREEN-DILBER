#include <stdio.h>

int main()
{   float Fahrenheit;
    float Celsius;
    
    printf("Enter the temperature in Fahrenheit:");
    scanf("%f", &Fahrenheit);
    
    Celsius = (Fahrenheit-32)*5/9;
    printf("The temperature in Celsius=%.2f\n",Celsius);

    return 0;
}