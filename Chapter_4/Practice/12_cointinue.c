#include<stdio.h>
 
int main(){

    int skip = 5;
    int i;

    while (i < 100)
    {
        
        if (i != skip)
        {
            continue;
        }
        else
        {
            printf("The value are %d\n");
        }
        
        
    }
    

return 0;
}