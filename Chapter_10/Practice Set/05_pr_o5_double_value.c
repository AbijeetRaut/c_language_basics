#include <stdio.h>
int main()
{
    FILE *pointer;
    int num;
    pointer = fopen("05_ref.txt", "r");
    fscanf(pointer, "%d", &num);
    printf("%d", num);
    fclose(pointer);
    pointer = fopen("05_ref.txt", "w");
    int sovle = num*2;
    fprintf(pointer, "%d", sovle);
    fclose(pointer);
return 0;
}