#include <stdio.h>

int main()
{
    int Tax = 0;
    int Income;

    printf("How Much Is Your Monthly Income\n");
    scanf("%d", &Income);
    if (Income >= 250000 && Income <= 500000)
    {
        Tax = Tax + 0.05 * (Income - 250000);
    }
    if(Income >= 500000 && Income <= 1000000){
        Tax = Tax + 0.20 * (Income - 500000);
    }
    if(Income >= 1000000){
        Tax = Tax + 0.30 * (Income - 1000000);
    }
    
        printf("You Have to Pay %d From Your Income", Tax);

        return 0;
    }