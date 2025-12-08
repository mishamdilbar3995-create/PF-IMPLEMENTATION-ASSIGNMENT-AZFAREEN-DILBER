#include <stdio.h>

int main()
{   int marks[5];
    int total = 0;
    float average;
    
    for(int i=0; i<5; i++){
        printf("enter the marks for the subject:");
        scanf("%d", &marks[i]);
        total+= marks[i];
    }
    
    average = total/5;
     
    printf("total is:%d\n",total);
    printf("average is: %.2f\n", average);
    

    return 0;
}
