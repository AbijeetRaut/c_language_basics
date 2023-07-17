#include <stdio.h>
int main()
{
    int array[2][3];
    int i;
    int a;
    for (i = 0; i <= 1; i++)
    {
        for (a = 0; a <= 2; a++)
        {
            printf("Enter the number of students %d in %d subject\t", i + 1, a + 1);
            scanf("%d", &array[i][a]);
        }
    }

        for (int b = 0; b <= 1; b++)
        {
            for (int e = 0; e <= 2; e++)
            {
                printf("{%d, %d}\n", array[b][b+1]);
            }
        }

        return 0;
    
}