#include<stdio.h>
 
int main(){

    int a;

    printf("Enter a Number\n");
    scanf("%d", &a);

    do{
        printf("the value are %d \n", a--);
    }
    while(a <= 4 && a >= 1);
return 0;
}