#include <stdio.h>
int main()
{
    FILE *pointer;
    int num, num2, num3;
    pointer = fopen("01.txt", "r");
    fscanf(pointer, "%d %d %d", &num, &num2, &num3);
    printf("the first number is %d\nthe second number is %d\nthe third number is %d", num, num2, num3);
return 0;
}