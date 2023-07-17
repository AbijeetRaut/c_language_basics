#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *) calloc(5, sizeof(char));
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the number %d : \n", i+1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("the number you have entered are %d : %d\n", i+1, ptr[i]);
    }
    
    
return 0;
}