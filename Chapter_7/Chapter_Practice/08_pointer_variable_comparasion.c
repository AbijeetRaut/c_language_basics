#include <stdio.h>
int main()
{
    int a = 4, c = 2;
    printf("the subtraction value of the pointer a0 and a1 is %u\n", &a - 1);
    printf("the subtracting valeu of the pointer b1 and b2 is %u\n", &c + 1);
    if(&a - 1 == &c + 1)
    printf("the output matched");
    else
    printf("it doesnot matched");
return 0;
}
