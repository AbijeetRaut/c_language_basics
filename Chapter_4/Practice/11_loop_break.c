#include<stdio.h>
 
int main(){

//this is from FOR loop.
    /*int a;

    printf("Enter the to give the stop point value\n");
    scanf("%d", &a);

    for (int i = 0; i <= 100; i++)
    {
        printf("the value are %d\n", i);
        if (i == a)
        {
           break;
        }    
    }*/
    //this is for DO WHILE loop.
    int i = 0;
    do
    {
        printf("the values are %d\n", i);
        i++;
        if (i == 500)
        {
            break;
        }
        
    } while (i < 1000);
    
    
return 0;
}