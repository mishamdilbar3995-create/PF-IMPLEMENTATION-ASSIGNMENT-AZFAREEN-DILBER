#include <stdio.h>
int main()
{
    float vi;
    float t;
    float s;
    float a;
    
    vi = 3.5;
    t = 4.1;
    a = 2.0;
    ///Calculate/Compute the value of S using formula
    s = (vi * t) + (0.5*a*t*t);
    printf("initial velocity is:%.2f\n", vi);
    printf("time is:%.2f\n",t);
    printf("acceleration is:%.2f\n",a);
    printf("displacement is : %.2f\n", s);
    return 0;
}
