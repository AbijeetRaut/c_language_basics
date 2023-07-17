#include <stdio.h>
struct arrow
{
    int x;
    int y;
};
int main()
{

    struct arrow e1;
    e1.y = 100;
    struct arrow *pointer;
    pointer = &e1;
    pointer->x = 54;
    printf("the value of x and Y are %d and %d", e1.x, e1.y);
    return 0;
}