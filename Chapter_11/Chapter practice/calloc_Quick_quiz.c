#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *pointer;
    int n;
    printf("Enter how many array you want:\t");
    scanf("%d", &n);
    pointer = (int *)calloc(n, sizeof(int));
    for (int a = 0; a < n; a++)
    {
        printf("Enter the numebr %d:\n", a + 1);
        scanf("%d", &pointer[a]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("the numebr you entered in %d are: %d\n", i + 1, pointer[i]);
    }
    return 0;
}