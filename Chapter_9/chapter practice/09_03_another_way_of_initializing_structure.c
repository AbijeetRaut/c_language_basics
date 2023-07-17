#include <stdio.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};

int main()
{
    struct employee abijeet = {100, 2000.10, "Abijeet"};

    printf("Code: %d\n", abijeet.code);
    printf("Salary: %.2f\n", abijeet.salary);
    printf("Name: %s\n", abijeet.name);
    return 0;
}