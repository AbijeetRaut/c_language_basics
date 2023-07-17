#include <stdio.h>
int main()
{
    int array[5];
    int *pointer = &array[0];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks sheet of student\n");
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("the marks sheet you have entered in array[%d] is %u\n", i+1, &array[i]);
    }
    
    


return 0;
}