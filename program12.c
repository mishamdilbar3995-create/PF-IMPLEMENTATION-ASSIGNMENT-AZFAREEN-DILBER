#include <stdio.h>

int main()
{   
    float PI = 3.1417;
    float  radius;
    float height;
    float volume;
    
    printf("Enter the radius:\n");
    scanf("%f", &radius);
    printf("Enter the height:\n");
    scanf("%f", &height);
     
    volume = PI * radius * radius * height;
    printf("volume=%.2f\n",volume);
    return 0;
}
