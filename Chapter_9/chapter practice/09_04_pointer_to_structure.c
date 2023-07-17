#include <stdio.h>
struct info
{
    int code;
    char name;
    float salary;
};
int main()
{

    struct info e1;
    struct info *pointer;

    pointer = &e1;   

    //first method is the old method which was tought in pointer
    //(*pointer).code = 101;      
    //printf("code: %d\n", e1.code);          

    //if this doesnt work then you also can write 

    //this is the second method which is learned in this.
    pointer -> code = 105;
    printf("code: from --(pointer -> code)-- %d\n", e1.code);

    return 0;
}