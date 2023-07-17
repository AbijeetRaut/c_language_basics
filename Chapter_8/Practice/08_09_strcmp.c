#include <stdio.h>
#include <string.h>
int main()
{
    char name[45] = "abijeet";
    char *sec_names = "bbijeet";
    int value = strcmp(name, sec_names);
    printf("%d", value);

    return 0;
    //how does it work:=-----
    //basically it compres the two given numbers
    //with the unmatched words
    //eg:- "abijeet" and "sbijeet"
    //the difference is a and s
    //it compres the word with its ASCII number.
}