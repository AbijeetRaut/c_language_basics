#include <stdio.h>
int main()
{
    FILE *pointer;
    int num, result;
    pointer = fopen("02_table.txt", "w");
    printf("Enter the multiplication table\t");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
    {
        result = i * num;
        fprintf(pointer, "%d * %d = %d\n", i, num, result);
    }
    fclose(pointer);
    printf("Your Table Has Been Generated Check The Accessed Text(.txt) File");

    return 0;
}