#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *pointer, pointer2;
    pointer = (int *) malloc(6000000000000 * sizeof(int));
    for (int i = 0; i < 6000000000000; i++)
    {
        pointer2 = (int *) malloc(60000000000000000000000 * sizeof(int));
        printf("Enter the number in %d: \t", i + 1);
        scanf("%d", &pointer[i]);
        free(pointer2);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("the number you have entered are %d\t", i + 1, pointer);
    }
    return 0;
}
//how does it work?
/*
-----> jaba endless loop run hunxa taba tyo free dynamic memory allocation le pachadi ko memory haru sab clear garxa jasle garda program ko
karan le garda RAM ma dher load pardaina    
*/