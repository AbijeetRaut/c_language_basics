#include<stdio.h>
 
void change (int a);

int main(){

    int a = 4;
    printf("the value is %d\n", a);

    change(a);
    printf("the value of a is %d", a);

return 0;
}
//the value given in the change varialbe is different and the value given in the main is different so after declearing the value is alos not changing the value.
void change(int a)
{
    a = 45;
}