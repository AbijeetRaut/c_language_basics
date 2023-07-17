#include <stdio.h>
int present(char *name, char a)
{
    char *pointer = name;
    int count = 0;
    while (*pointer != '\0')
    {
        if (*pointer == a)
        {
            count++;
        }
        *pointer++;
    }
    return count;
}

int main()
{
    char name[] = "abijeet";
    int count = present(name, 'e');
    if (count > 1)
        printf("it is presented and the word you have given is %d time repeated", count);

    else

        printf("it is not presented");

    return 0;
}