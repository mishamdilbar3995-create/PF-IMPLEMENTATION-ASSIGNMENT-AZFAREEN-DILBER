#include <stdio.h>
#include <math.h>
  
int main()
{   float a,b,c;
    float s;
    float area;
    
    printf("Enter the side a:");
    scanf("%f", &a);
    printf("Enter the side b:");
    scanf("%f", &b);
    printf("Enter the side c:");
    scanf("%f", &c);
    
    s = (a+b+c)/2;
    
    area = sqrt(s * (s-a)* (s-b) * (s-c));
    
    printf("area of the triangle is:%.2f\n",area);

    return 0;
}
