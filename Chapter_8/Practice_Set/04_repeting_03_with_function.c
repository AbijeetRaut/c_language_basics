#include <stdio.h>
int Own_strLen(char *name)
{
    int number = 0;
    char *pointer = name;
    while (*pointer != '\0')
    {
        *pointer++;
        number++;
    }
    return number;
    
}
int main()
{
    char name[] = "abjeet";
    int l = Own_strLen(name);
    printf("the length of your word is %d\n", l);
return 0;
}