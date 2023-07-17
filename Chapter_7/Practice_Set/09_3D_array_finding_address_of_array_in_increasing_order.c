#include <stdio.h>
int main()
{
    int array[2][3][4];
    for (int a = 0; a <= 2; a++)
    {
        for (int b = 0; b <= 3; b++)
        {
            for (int c = 0; c <= 4; c++)
            {
                printf("the addess of the arrys are [%d] [%d] [%d] %u\n", a, b, c, &array[a][b][c]);
            }
        }
    }
    return 0;
}