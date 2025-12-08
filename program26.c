#include <stdio.h>

  float rupeestoDollars(float rupees){
    float dollars = rupees/ 60.0;
    return dollars;
}
int main()
{   float rupees = 12000.0;
    float dollars;
    
    dollars = rupeestoDollars(rupees);
 
    printf("dollars is:%.2f\n",dollars);
    return 0;
}
