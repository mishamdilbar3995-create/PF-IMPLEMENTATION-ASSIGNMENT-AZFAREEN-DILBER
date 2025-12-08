#include <stdio.h>

int main()
{   int RollNumber = 7;
    int MarksInPF,MarksInIC,MarksInCG;
    MarksInPF=87,MarksInIC=98,MarksInCG=92;
    
    int total;
    int Average;
    total = MarksInPF+MarksInIC+MarksInCG;
    Average = total/3;
    
    printf("RollNumber is:%d\n",RollNumber);
    printf("MarksInPF is: %d\n",MarksInPF);
    printf("MarksInIC is: %d\n",MarksInIC);
    printf("MarksInCG is: %d\n",MarksInCG);
    printf("total=%d\n",total);
    printf("Average=%d\n",Average);
    return 0;
}
