#include <stdio.h>
void values(int *pointer, int number)
{
    for (int a = 0; a <= number; a++)
    {
        printf("the element %d is %d\n", a + 1, *(pointer + a));
    }
}
int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int terms = 4;
    values(array, terms);
    return 0;
}