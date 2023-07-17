#include <stdio.h>
void slice(char *name, int a, int b)
{
    int i = 0;
    while ((i+a) < b)
    {
        name[i] = name[i+a];
        i++;
    }
    name[i] = '\0';
    
}
int main()
{
    char name[] = "indra_bahadur_kathayet";
    slice(name, 2 ,9);
    printf("%s", name);
return 0;
} 