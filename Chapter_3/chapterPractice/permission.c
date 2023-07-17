#include<stdio.h>
 
int main(){

    int a;

    printf("what is your age\t", a);
    scanf("%d", &a);

    if (a < 18 ){
        printf("you can't dirve\n",a);

    }
    else
    {
        printf("you can drive but before driving you have to make lisence\n", a);
    }
    if (a == 50) {
        printf("ohh so you reached age 50", a);
    }

    
    

return 0;
}