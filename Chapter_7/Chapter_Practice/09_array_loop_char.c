#include <stdio.h>
int main()
{
    char name[5][2];
    for(int a = 0; a <= 5; a++){
        printf("Enter your name \n");
        scanf("%s", &name[a]);
    }
    for (int a = 0; a <= 5; a++)
    {
        printf("Name you have been insert in array[%d] is %s\n", a+1, name[a]);
    }
    
return 0;
}