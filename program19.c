#include <stdio.h>

int main()
{
    int ageInYears;
    int ageInMonths;
    int ageInDays;
    
    ageInYears = 20;
    
    ageInMonths = ageInYears * 12;
    ageInDays = ageInYears * 365;
    
    printf("ageInYears is:%d\n",ageInYears);
    printf("ageInMonths is:%d\n",ageInMonths);
    printf("ageInDays is:%d\n",ageInDays);
    
    return 0;
}