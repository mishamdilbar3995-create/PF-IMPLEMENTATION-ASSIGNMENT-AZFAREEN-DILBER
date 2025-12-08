#include <stdio.h>
#define PI 3.1417
int main()
{  
    float area;
    float radius;
    
    printf("Enter the radius:\n");
    scanf("%f",&radius);
    
    area = PI * radius * radius;

    printf("area = %.2f\n",area);

    return 0;
}
