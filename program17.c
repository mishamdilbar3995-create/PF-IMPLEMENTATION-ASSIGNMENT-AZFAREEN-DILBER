#include <stdio.h>
#include <math.h>

int main()
{
    double number = 15.58971;
    double IntegralPart;
    double FractionalPart;
    
    FractionalPart= modf(number, &IntegralPart);
    
    printf("original number is: %.2f\n",number);
    printf("IntegralPart is:%.2f\n", IntegralPart);
    printf("FractionalPart is:%.2f\n",FractionalPart);

    return 0;
}
