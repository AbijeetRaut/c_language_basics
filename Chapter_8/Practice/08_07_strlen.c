#include <stdio.h>
#include <string.h>
int main()
{
    char *name = "Abijeet";
    int number = strlen(name);
    printf("The Length of the word %s is %d", name, number);
    return 0;
}
//strlen is the data type which counts the size of the string given by the user to count.
//Note:-
//strlen doesnot count the null character(\0).