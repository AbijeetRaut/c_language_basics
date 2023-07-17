#include <stdio.h>

typedef struct time
{
    int hour;
    int minute;
    int second;
} time;

void samamye(time t)
{
    printf("the first time arraange is: %d-%d-%d sec\n", t);
    // printf("the second time arrange is: %d/%d/%d\n", t2.hour, t2.minute, t2.second);
}

int compare(time t1, time t2)
{
    if(t1.hour > t2.hour)
    {
        printf("t1");
    }
    else if(t1.minute > t2.minute)
    {
        printf("t1");
    }
    else if(t1.second >t2.second)
    {
        printf("t1");
    }
    else if(t2.hour > t1.hour)
    {
        printf("t2");
    }
    else if(t2.minute > t1.minute)
    {
        printf("t2");
    }
    else if(t2.second > t1.second)
    {
        printf("t2");
    }
}
int main()
{
    time t1 = {12, 56, 24};
    time t2 = {13, 54, 12};
    samamye(t1);
    samamye(t2);
    int cmp_time;
    cmp_time = compare(t1, t2);
    cmp_time;

     
    return 0;
}