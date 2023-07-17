#include <stdio.h>
typedef struct print
{
    int x;
    int y;
} def;

void show(def c)
{
    printf("%d is the real number\n", c.x);
    printf("%d is the imaginary number\n", c.y);
}
int main()
{
    def array[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real number in [%d]\t", i + 1);
        scanf("%d", &array[i].x);

        printf("Enter the imaginary number [%d]\t", i + 1);
        scanf("%d", &array[i].y);
    }

    for (int a = 0; a < 5; a++)
    {
        show(array[a]);
    }

    return 0;
}