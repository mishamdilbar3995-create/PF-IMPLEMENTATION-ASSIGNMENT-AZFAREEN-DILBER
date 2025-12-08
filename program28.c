#include <stdio.h>
 int valueofdisc(int a,int b,int c){
    
    return b*b - 4*a*c;
 }
int main()
{   int disc;
    int a = 1;
    int b = 2;
    int c = 3;
    
    disc = valueofdisc(a,b,c);
    printf("disc = %d", disc);

    return 0;
}
