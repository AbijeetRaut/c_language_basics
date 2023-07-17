#include <stdio.h>
int main()
{
    FILE *pointer;
    FILE *pointer2;

    pointer = fopen("a.txt", "r");
    pointer2 = fopen("c.txt", "w");

    char c = fgetc(pointer);
    while (c != EOF)
    {
        fputc(c, pointer2); //this section is for to how many times you want to repeat the line of statement.
        //and this line no13 is a line of code in which file you want to print that code.
        c = fgetc(pointer); //since this will use to create a refrence file till how many time the loop runs it will keepup running
        //jaba samma line 15 ko code run hunxa taba samma yasle refrence dine kam garxa one by one (mean = a single word by word)
    }
    fclose(pointer);
    fclose(pointer2);

    return 0;
}