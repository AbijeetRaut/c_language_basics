#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *pointer;
    pointer = (int *) malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("Enter a number in %d :\t", i + 1);
        scanf("%d", &pointer[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("the number you have entered are %d : %d\n", i + 1, pointer[i]);
    }

    return 0;
}