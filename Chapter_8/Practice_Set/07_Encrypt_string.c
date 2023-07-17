#include <stdio.h>
void encrypt(char *name)
{
    char *pointer = name;
    while (*pointer != '\0')/*how this function works*/ 
    {                                                   
        *pointer += 1;                                 
        pointer++;                                           
    }                                                           
}                                                        
int main()                                                       
{                                                             
    char name[] = "this"; 
    encrypt(name);                                                              
    printf(" encrypted from is::\t%s", name);                
    return 0;                                                   
}                                                              
/*
                   # how does this works
basically i is the process of increasing the ascii by the value of 1

lets see exaple to understand deeply=
        in encrypt form :
                        this will change into: uijt
                          numberically ascii value of t : 116
                          ascii value of u : 117

                          ascii value of u: 116+1
                          ascii value of u = 117
                          so this works like this. 
*/