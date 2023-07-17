#include <stdio.h>
int main()
{
    FILE *pointer;
    int access_file;
    pointer = fopen("hero.txt", "r");
    if (pointer == NULL)
    {
        printf("The file which you has assigned that hasn't been created");
    }
    else
    {
        fscanf(pointer, "%d", &access_file);
        fclose(pointer); //this is important to close because it reduces the processor effort.
        printf("%d\n", access_file);
    }
    return 0;
}