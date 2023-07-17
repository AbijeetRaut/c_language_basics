#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *pointer;
    int num;
    printf("Enter how many size of integer you want: \t");
    scanf("%d", &num);
    pointer = (int *)malloc(num * sizeof(int));
    for (int i = 0; i < num; i++)
    {
        printf("Enter a number in malloc [%d] : \n", i + 1);
        scanf("%d", &pointer[i]);
    }
    for (int i = 0; i < num; i++)
    {
        printf("the number which you entered in malloc [%d] is : %d\n", i + 1, pointer[i]);
    }

    return 0;
}