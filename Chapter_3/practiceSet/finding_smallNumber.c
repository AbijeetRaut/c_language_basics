#include<stdio.h>
 
int main(){

    char lowercase;

    printf("Enter a Word \t");
    scanf("%c", &lowercase);

    if(lowercase <= 122 && lowercase >= 97){
        printf("It is lowercase");
    }
    else
    {
        printf("it is not lowercase");
    }

return 0;
}