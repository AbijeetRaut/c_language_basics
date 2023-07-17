#include <stdio.h>
int main()
{
    int array[10];
    int c = 5;

    for (int a = 1; a <= 10; a++)
    {
        array[a] = a * c;
    }
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", c, i, array[i]);
    }

    return 0;
}
