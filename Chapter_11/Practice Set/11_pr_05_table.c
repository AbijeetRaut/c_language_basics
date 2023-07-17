#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *pointer, result, table;
    pointer = (int *) malloc(5 * sizeof(int));
        printf("Enter a number you want a table of :\n");
        scanf("%d", &table);
    for(int i = 0; i<10; i++){
        result = table * (i +1);
        printf("%d * %d = %d\n", i+1, table, result);
    }
    pointer = realloc(pointer, 15 * sizeof(int));

    for(int i = 0; i<15; i++)
    {
        printf("%d * %d = %d\n", i+1, table, (i+1)*table);
    }
return 0;
}