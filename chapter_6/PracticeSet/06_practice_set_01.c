#include <stdio.h>
int main()
{
    int a = 4;
    int *b = &a;
    printf("the valie of a is %d\n", &a);
    printf("the address of the b is %d\n", b);
    printf("the value of the b is %d\n", *b);
return 0;
}