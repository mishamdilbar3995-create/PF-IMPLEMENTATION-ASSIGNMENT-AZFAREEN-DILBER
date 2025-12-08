#include <stdio.h>

int main()
{   
    int var1 = 25;
    int var2 = 54;
    int temp;
    
    printf("before interchange:%d\n");
    printf("var1 is:%d\n", var1);
    printf("var2 is:%d\n", var2);
    
    temp = var1;
    var1 = var2;
    var2 = temp;
    
    printf("after interchange:%d\n");
    printf("var1 is: %d\n", var1);
    printf("var2 is: %d\n", var2);
    return 0;
}
