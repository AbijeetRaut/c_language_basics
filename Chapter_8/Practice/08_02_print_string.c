#include <stdio.h>
int main()
{
    char str[] = {'A', 'b', 'i', 'j', 'e', 'e', 't', '\0'};
    char istring[] = "Raut";
    char *pointer = str;
    char *poienter = istring;
    while (*pointer != '\0')
    {
        printf("%c", *pointer);
        pointer++;
    }
    printf(" ");
    while (*poienter != '\0')
    {
        printf("%c", *poienter);
        poienter++;
    }

    return 0;
}
