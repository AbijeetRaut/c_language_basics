//occerence = repeat of something related
#include <stdio.h>
int occerance(char *name, char a)
{
    char *pointer = name;
    int count = 0;
    while (*pointer != '\0') 
    {
        if (*pointer == a)
        {
            count++;
        }
        *pointer++;
    }
    return count;
}
int main()
{
    char name[] = "abijeet";
    int incremented = occerance(name, 'e');
    printf("character has been repeated %d times in your words", incremented);
    return 0;
}

/*
                        how this program works?
the main is work is done from the function, 
the while loops will runs till the condition is false.
when the condition become false and when it will start the if statement
when the if statement is true it will increment the count value by 1.
return count; ---> will runs repeat the word one by one as like 
                                                                fist it checks for a 
                                                                second it checks for b
                                                                third it checks for c
                                                                like wise others
*/