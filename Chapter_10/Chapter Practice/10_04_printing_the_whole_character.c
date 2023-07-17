#include <stdio.h>
int main()
{
    FILE *pointer;
    pointer = fopen("print.txt", "r");
    char c = fgetc(pointer);
    while(c!=EOF)
    {
        printf("%c", c);
        c = fgetc(pointer);
    }
    //EOF = end of time
return 0;
}