#include <stdio.h>
int main()
{
    char name[45] = "number";
    char *words = name;
    int a = 0;

    while (*words != '\0')
    {
        a++;
        *words++;
        printf("%s\n", words);
    }
    printf("%d", a);

    
return 0;
}
