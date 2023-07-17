#include <stdio.h>
#include <string.h>

struct employee
{
    char name[20];
    int code;
    int salary;
};

void show(struct employee e1)
{
    printf("Name of the employee: %s\n", e1.name);
    printf("code of employee is : %d\n", e1.code);
    printf("salary of employee is: %d\n", e1.salary);
}

int main()
{
    struct employee e1;
    struct employee *pointer;

    pointer = &e1;
    strcpy(pointer->name, "Spidor-Mon");
    pointer->code = 101;
    pointer->salary = 20000;

    printf("form here  the new function starts\n\n");

    show(e1);
    return 0;
}