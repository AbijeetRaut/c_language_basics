#include <stdio.h>
int main()
{
    FILE *pointer;
    pointer = fopen("gets.txt", "r");
    putc('h', pointer);
    putc('e', pointer);
    putc('l', pointer);
    putc('l', pointer);
    putc('o', pointer);
    // char c = getc(pointer);
    // fclose(pointer);
    //getsc reads the character by one by one
    //so you need to use single fgetsc(pointer) in for a  single character.
    printf("%c", fgetc(pointer));
    printf("%c", fgetc(pointer));
    printf("%c", fgetc(pointer));
    printf("%c", fgetc(pointer));
    printf("%c", fgetc(pointer));
    return 0;
}

//NOTE:- fputc is used to read the insert character.
//NOTE:- fgetc is used to see the dericated character and print in the console box(TERMINAL).