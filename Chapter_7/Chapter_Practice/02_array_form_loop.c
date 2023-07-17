#include <stdio.h>
int main()
{
    int Value[5];
    for(int a = 0; a < 5; a++)
    {
        printf("Enter the array: ", a+1);
        scanf("%d", &Value[a]);
    }
    for(int a = 0; a < 5; a++)
    {
        printf("The Value entered in the first loop %d are: %d\n", a + 1, Value[a]);
    }
return 0;
}