#include<stdio.h>
 
int main(){
    int a;

    printf("Enter a Number");
    scanf("%d", &a);

    for(int i = a; i ; i--)
    { 
        printf("Your Number is %d\n ", i);
    }

return 0;
}