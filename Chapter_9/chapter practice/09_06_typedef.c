#include <stdio.h>
#include <string.h>
typedef struct employee
{
    char name[20];
    int code;
    int salary;
} emp;

//defination of typedef
//---> typedef is a predefined statemetn which help to create a data type as like int, float, char.

void show(emp e1)
{
    printf("name is: %s\n", e1.name);
    printf("code is: %d\n", e1.code);
    printf("salary is: %d\n", e1.salary);
}
int main()
{
    emp e1;
    emp *pointer;
    emp *poin;
    emp *pntr;

    poin = &e1;
    strcpy(poin->name, "Abijeet");

    pointer = &e1;
    pointer->code = 101;

    pntr = &e1;
    pntr->salary = 20000;

    show(e1);
    return 0;
}