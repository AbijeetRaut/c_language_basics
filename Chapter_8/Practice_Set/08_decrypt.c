#include <stdio.h>
void decrypt(char *name)
{
    char *pointer = name;
    while (*pointer != '\0')
    {
        *pointer -= 1;
        pointer++;
    }
    
}
int main()
{
    char name[] = "uijt";
    decrypt(name);
    printf("%s", name);
return 0;
}