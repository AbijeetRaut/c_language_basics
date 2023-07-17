#include <stdio.h>
#include <stdlib.h>
int main()
{
    float *pointer;
    pointer = (float *)malloc(5 * sizeof(float));
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value in %d\t", i + 1);
        scanf("%f", &pointer[i]);
    }
    for (int a = 0; a < 5; a++)
    {
        printf("the value of are %d = %.2f\n", a + 1, pointer[a]);
    }

    return 0;
}