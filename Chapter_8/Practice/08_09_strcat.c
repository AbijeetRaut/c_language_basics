#include <stdio.h>
#include <string.h>
int main()
{
    char st1[45] = "abijeet";
    char *st2 = "raut";
    strcat(st1, st2);
    printf("the words are %s", st1);
    return 0;
}