#include <stdio.h>
int variable(int a);
int main()
{
    int i = 5;
    printf("the address of the i is %u\n", &i);
    variable(i);
    
return 0;
}
int variable(int a)
{
printf("the address of the i form the funtion call is %u\n", &a);    
}