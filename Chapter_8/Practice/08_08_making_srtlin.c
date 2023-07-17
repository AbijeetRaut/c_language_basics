#include <stdio.h>
void header_file(char name, char *count, int a)
{
    while (*count != '\0')
    {
        a += 1;
        *count++;
    }
}
int main()
{
    char name[] = "Abijeet";
    char *count = name;
    int a = 0;
    while (*count != '\0')
    {
        a += 1;
        *count++;
    }
    printf("the total number availavle in word %s is %d ", name, a);
    //form function is reamining.
    return 0;
}