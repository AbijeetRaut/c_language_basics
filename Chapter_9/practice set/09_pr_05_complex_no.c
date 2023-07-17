#include <stdio.h>
struct complex
{
    int x;
    int y;
};

 struct complex reference(struct complex e1, struct complex e2)
{
    struct complex result;
    result.x = e1.x + e2.x;
    result.y = e1.y + e2.y;
    return result;
}
int main()
{
    struct complex e1, e2;
    struct complex sum;
    e1.x = 45;
    e1.y = 54;

    e2.x = 55;
    e2.y = 46;

    sum = reference(e1, e2);                //if you declare a data type for function in this type of statement then this wont work
    printf("x = (%d) , y = (%d)", sum.x, sum.y);

    return 0;
}