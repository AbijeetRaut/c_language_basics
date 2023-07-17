#include<stdio.h>
 
int main(){

    int a;

    printf("Enter the Value");
    scanf("%d", &a);

    for (int i = a*2; i < 20; i++)
    {
        printf("the multiplicaion table is %d\n", a);
    }
    

return 0;
}