#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *pointer;
    pointer = (int *) malloc(5 * sizeof(int));
    for(int i = 0; i < 5; i++){
        printf("Enter the numebr %d: \n", i+1);
        scanf("%d", &pointer[i]);
    }
    for(int i = 0; i< 5; i++){
        printf("you have entred are %d : %d\n", i+1, pointer[i]);
    }
    pointer = realloc(pointer, 10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        printf("Enter a number again %d:\n", i+1);
        scanf("%d", &pointer[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("the number you have entered in %d : %d\n", i+1, pointer[i]);
    }
    
    
return 0;
}