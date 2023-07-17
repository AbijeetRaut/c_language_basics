#include <stdio.h>
int address(int *b);
int main()
{
    int a = 5;
    printf("the address of the a is %u\n", &a);
    address(&a);

return 0;
}
int address(int *b)
{
    int result = 10;
    int times = *b * result;
    printf("%d\n", times);
    printf("the adress of the 10 times is %u\n", &times);
}