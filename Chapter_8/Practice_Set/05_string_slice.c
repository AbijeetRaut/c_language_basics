#include <stdio.h>
char slice(char *name, int a, int b)
{
    int i = 0;
    while ((i + a) < b) //this loop will not allow the block of code to not to go any further form name[5];
    {
        name[i] = name[i + a]; /*
                                why a, e and t are not printed?
                                --> it is because a lies in the 0th array(name[0])                
                                */
        i++;
    }
    name[i] = '\0';
}
int main()
{
    char name[] = "abijeetraut"; //at first this is in the form of array
    /*
    name[0] = a;
    name[1] = b;
    name[2] = i;
    name[3] = j; like others
    */
    slice(name, 1, 5);
    printf("%s", name);
    return 0;
}
