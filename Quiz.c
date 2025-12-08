#include <stdio.h>

int main()
{   int N;
    int photosTaken;
    float ChargeperPhoto = 50.0;
    float discountedRateForEvent = 0.08;
    float IncomePerEvent = 0.0;
    float Totalincome = 0.0;
    float discount;
    discount = Totalincome * discountedRateForEvent;
    
    printf("Enter the number of events (N):");
    scanf("%d", &N);
    
    for(int i = 1; i<=N; i++){
        printf("enter the number of photosTaken :");
        scanf("%d", &i);
        
        if("photosTaken > 300"){
            printf("applied discount");
        }else{
            printf("discountedRateForEvent = IncomePerEvent");
        }
    }
      IncomePerEvent = photosTaken * ChargeperPhoto;
       
       printf("IncomePerEvent is:%.2f\n", IncomePerEvent);
       
       Totalincome += IncomePerEvent;
       printf("Totalincome is:%.2f\n", Totalincome);
    return 0;
}