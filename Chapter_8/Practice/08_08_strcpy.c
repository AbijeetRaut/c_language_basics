#include <stdio.h>
#include <string.h>
int main()
{
    char *name = "Abijeet";
    char fame[55];
    strcpy(fame, name);
    printf("fane = %s", fame);
    //note:-
    //the number writen in strcpy only change the string(words) only.
    //do not try to use strcpy in integer value beacuse it doesnot work. 
    
    return 0;
}