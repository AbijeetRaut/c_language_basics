#include <stdio.h>
int main()
{
    int array[2][3];
    int a, b;
    for (a = 0; a < 2; a++)
    {
        for (b = 0; b < 3; b++)
        {
            printf("Enter number \t");
            scanf("%d", &array[a][b]);
        }
    }
    for (a = 0; a < 2; a++)
    {
        for (b = 0; b < 3; b++)
        {
            printf("%d ", array[a][b]);
            if (b == 2)
            {
                printf("\n");
            }
        }
    }

    return 0;
}