#include <stdio.h>
int positive(int posi[], int n)
{
    for (int i = 0; i < 5; i++)
    {
        if (posi[i] > 0)
        {
            printf("the positive number in the array are %d\n", posi[i]);
        }
    }
}
int main()
{
    int array[] = {1, -2, 3, -4, 5, -6};
    positive(array, 5);
    return 0;
}