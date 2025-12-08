#include <stdio.h>
   int convertTimetoSeconds(int hours, int minutes, int seconds ){
    int totalseconds = (hours*3600) + (minutes*60) + seconds;
    return totalseconds;
 }
int main()
{   int hours ;
    int minutes ;
    int seconds;
    int totalseconds;
    
    printf("enter hours:");
    scanf("%d", &hours);
    printf("enter minutes:");
    scanf("%d", &minutes);
    printf("enter seconds:");
    scanf("%d", &seconds);
    
    totalseconds =  convertTimetoSeconds(hours,minutes,seconds);
    printf("totalseconds = %d\n",totalseconds);
    return 0;
}
