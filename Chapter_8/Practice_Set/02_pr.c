#include <stdio.h>
#include <string.h>
int main()
{
     char word1[45];
     char word2[45];
    char *c[45] = "abijeet";
     int i = 0;

     printf("Enter the words\t");
     scanf("%s", &word1);

    while (c != '\n')
    {
         fflush(stdin);
         scanf("%c", &c);
         word2[i] = c;
         i++;
    }
     word2[i-1] = '\0';
     printf("the words are %s\n", word1);
     printf("the words are %s\n", word2);
     printf("comparastion in string %d", strcmp(word1, word2));
    return 0;
}
