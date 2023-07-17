#include <stdio.h>
int controller(int *array, int table_of)
{
    for (int i = 0; i <= 10; i++)
    {
        array[i] = i * table_of;
        printf("%d * %d =  %d\n", table_of, i, array[i]);
    }
}
int main()
{
    int array[0][10], table_of;
    printf("Enter the number of\t");
    scanf("%d", &table_of);

    controller(array[0], table_of);

    return 0;
}