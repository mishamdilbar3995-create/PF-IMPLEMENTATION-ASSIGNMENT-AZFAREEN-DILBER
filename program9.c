#include <stdio.h>

int main()
{
   int num1,num2,num3,num4;
   int max;
    
    printf("Enter the four integers");
    scanf("%d,%d,%d,%d", &num1, &num2, &num3, &num4);
    //Assume the first num is maximum number 
    
    num1 = max;
    
    if(num2>max) {max = num2;}
    if(num3>max) {max = num3;}
    if(num4>max) {max = num4;}
    

    printf("The maximum of the four numbers is:%d\n", max);

    return 0;
}
