#include <stdio.h>
int main()
{
    FILE *pointer;
    int number = 12;
    pointer = fopen("file.txt", "w");
    fprintf(pointer, "the number is %d\n", number);//we can use fprintf multiple times or in short as we want times
    fprintf(pointer, "yeai i am learning C from harry" );
    fclose(pointer);

return 0;
}