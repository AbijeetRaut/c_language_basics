#include<stdio.h>
 
int main(){

    int a;

    printf("give a number");
    scanf("%d", &a);

    if(a < 18){
        printf("you can't drive \t");
    }
    else
    {
        printf("you can drive");
    }

return 0;
}