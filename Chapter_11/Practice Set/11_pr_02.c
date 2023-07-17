#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int num;

    printf("Enter how many loop you want\t");
    scanf("%d", &num);

    ptr = (int *) malloc(num * sizeof(int));

    for (int i = 0; i < num; i++)
    {
        printf("Enter a number in %d : ", i + 1);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < num; i++)
    {
        printf("the number you have entered are %d: %d\n", i+1, ptr[i]);
    }
    return 0;
}