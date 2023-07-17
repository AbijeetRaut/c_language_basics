#include <stdio.h>
int main()
{
    int a = 4;
    int b = 3;
    int c = 2;
    int d = 1;
    printf("the pointer address of a is %d\n", &a);
    printf("the pointer address of b is %d\n", &b); 
    printf("the pointer address of a is %d\n", &c);
    printf("the pointer address of s is %u\n", &d);
    int pointer_value_subs = &a - &b;
    printf("the pointer address after substracting is %u\n", &pointer_value_subs);
return 0;
}