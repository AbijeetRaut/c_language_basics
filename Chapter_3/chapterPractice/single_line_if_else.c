//unless it is not recomanded because it will mess up with your code when your code will become so long.
#include<stdio.h>
 
int main(){

    int a;

    printf("give me a number \t");
    scanf("%d", &a);
    (a < 10) ? printf("this is less then 10") : printf("this is more then 10");

return 0;
}