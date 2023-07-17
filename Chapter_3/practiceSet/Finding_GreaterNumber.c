#include<stdio.h>
 
int main(){

    int num1;
    int num2;
    int num3;

    printf("Enter a num1");
    scanf("%d", &num1);

    printf("Enter a num2");
    scanf("%d", &num2);

    printf("Enter a num3");
    scanf("%d", &num3);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("num1 is greater");
        
        }
        else
        {
            printf("num3 is greater");
        }
        
    }
    else if(num2 > num3){
        printf("num2 is greater");
        
    }
    else
    {
        printf("num3 is greater");
    }
    
    

return 0;
}