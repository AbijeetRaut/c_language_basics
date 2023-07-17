#include<stdio.h>
 int fibonacci(int a, int b);
int main(){
    int f = 9, s = 1;
    printf("%d", fibonacci(f , s));

return 0;
}
int fibonacci(int a, int b)
{
    int result;
    for (int i = 0; i < 21; i++)
    {
        printf("%d\t", a);
        result = a + b;
        a = b;
        b = result;
    }
    
}