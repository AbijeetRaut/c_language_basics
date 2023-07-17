#include <stdio.h>
int main()
{
    int hour = 13, result;

    if (hour > 12 )
    {
        result = hour - 12; 
    }
    if(result > 0)
    {
    printf("%d PM", result);
    }
return 0;
}