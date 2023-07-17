#include<stdio.h>
 
int main(){

    float Year;

    printf("Enter a number");
    scanf("%f", &Year);

    if (Year / 4)
    {
        printf("The Year You Entered is a leap year ");
    }
    else
    {
        printf("the year you have entered is not leap year ");
    }
    
    

return 0;
}