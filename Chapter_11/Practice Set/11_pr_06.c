#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *pointer;
    pointer = (int *) calloc(5, sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("Enter number in %d: \n", i+1);
        scanf("%d", &pointer[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("the number you have entered are %d : %d\n", i+1, pointer[i]);
    }
    pointer = realloc(pointer, 10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        printf("Enter number in second because before has been cleared %d: \n", i+1);
        scanf("%d", &pointer[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("the number you have entered are %d : %d\n", i+1, pointer[i]);
    }
    
return 0;
}