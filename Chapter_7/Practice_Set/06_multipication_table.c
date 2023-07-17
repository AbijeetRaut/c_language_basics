#include <stdio.h>
int mulTable(int *array, int table)
{
    int hold;
    printf("\n");
    printf("here comes for %d", table);
    printf("\n");
    for (int i = 0; i <= 10; i++)
    {
        array[i] = table * i;
    }
    for (int i = 0; i <= 10; i++)
    {

        printf("%d * %d = %d\n", table, i, array[i]);
    }
}
int main()
{
    int table[3][10];
    mulTable(table[0], 2);
    mulTable(table[1], 7);
    mulTable(table[2], 9);

    return 0;
}