#include<stdio.h>
 
int main(){

    int choose;
    printf("choose from 1 to 3\n");
    scanf("%d",&choose);
    switch (choose)
    {
    case 1:
    printf("the case you has choosen is case 1\n");
        break;
        case 2:
    printf("the case you has choosen is case 2\n");
        break;
        case 31:
    printf("the case you has choosen is case 3\n");
        break;
    
    default:
    printf("the case you has choosen is beyind this expression");
        break;
    }

return 0;
}