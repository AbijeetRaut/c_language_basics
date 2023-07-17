#include <stdio.h>
struct vector
{
    int x;
    int y;
};

struct vector Add(struct vector v1, struct vector v2)
{
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

int main()
{
    struct vector v1, v2;
    struct vector sum;

    v1.x = 1;
    v1.y = 2;

    v2.x = 3;
    v2.y = 4;

    sum = Add(v1, v2);
    printf("the sum of the values after adding the variables are (%d) on x and (%d) on y", sum.x, sum.y);

    return 0;
}