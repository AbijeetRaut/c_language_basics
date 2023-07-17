#include <stdio.h>
struct vector
{
    int x;
    int y;
};

int main()
{
    struct vector v1, v2;
    v1.x = 32;
    v1.y = 34;
    printf("the value that are assigned in v1.x is --(%d)-- and v1.y --(%d)--\n\n", v1.x, v1.y);

    v2.x = 55;
    v2.y = 99;
    printf("the value that are assigned in v2.x is --(%d)-- and v2.y is --(%d)--\n", v2.x, v2.y);

    return 0;
}