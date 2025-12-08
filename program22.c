#include <stdio.h>

int main()
{   
    char name;
    int age;
    float height;
    char gender;
    
    printf("Enter student name:");
    scanf("%s", &name);
    printf("Enter student age:");
    scanf("%d", &age);
    printf("Enter student height:");
    scanf("%f", &height);
    printf("Enter student gender:");
    scanf("%s", &gender);
     
    printf("name is:%s\n",name);
    printf("age is:%d\n",age);
    printf("height is:%.2f\n", height);
    printf("gender is:%s\n", gender);
    
    
    return 0;
}

