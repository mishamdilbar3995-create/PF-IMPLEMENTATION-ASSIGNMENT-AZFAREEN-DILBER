#include <stdio.h>

int main()
{   
    float millimeters;
    float inches;
    
    printf("Enter the millimeters:\n");
    scanf("%f", &millimeters);
    
    inches = millimeters/25.4;
    printf("inches = %.2f\n",inches);

    return 0;
}
