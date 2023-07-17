#include <stdio.h>
int main()
{
    int a = 2;
    int *b = &a;
    printf("the value of the pointer before substracting the value is %d\n", &a);
    b -= 2;
    printf("the address after substracting the prevoius value is %u\n", b);
return 0;
}