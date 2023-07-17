#include <stdio.h>
int main()
{
    int a, b;
    int array[10];
    int c = 1;

    for (b = 1; b <= 10; b++)
    {
        if (b == 1)
        {
            printf("enter");
            scanf("%d", &c);
        }
        array[b] = c * b;
    }
    for (a = 1; a <= 10; a++)
    {
        if (a == 10)
        {
            array[10] = array[10] - 1;
        }
        printf("%d * %d = %d\n", a, c, array[a]);
    }

    return 0;
}