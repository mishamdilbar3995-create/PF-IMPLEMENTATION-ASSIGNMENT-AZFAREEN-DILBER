#include <stdio.h>
int main()
{
    int var1 = 10;
    int var2 = 20;
    int temp;
    
    printf("before swapping:\n");
    printf("var1 = %d\n",var1);
    printf("var2 = %d\n",var2);
    
    // swap the values
    temp = var1;
    var1 = var2;
    var2 = temp;
    printf("after swapping:\n");
    printf("var1 = %d\n", var1);
    printf("var2 = %d\n", var2);
    
    return 0;
}
