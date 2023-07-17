#include <stdio.h>
#include <string.h>

struct employee
{
    char name[45];
    int code;
    float salary;
};
int main()
{
    struct employee e1, e2, e3;

    printf("Enter the code 01\t");
    scanf("%d", &e1.code);

    printf("Enter the salary 01\t");
    scanf("%f", &e1.salary);

    printf("Enter employee name 01\t");
    scanf("%s", e1.name);

    printf("\n");
    ////////////////////

    printf("Enter the code 02\t");
    scanf("%d", &e2.code);

    printf("Enter the salary 02\t");
    scanf("%f", &e2.salary);

    printf("Enter employee name 02\t");
    scanf("%s", e2.name);

    printf("\n");
    ////////////////////

    printf("Enter the code 03\t");
    scanf("%d", &e3.code);

    printf("Enter the salary 03\t");
    scanf("%f", &e3.salary);

    printf("Enter employee name 03\t");
    scanf("%s", e3.name);

    printf("\n");

    printf("%d is code  e1\n", e1.code);
    printf("%.3f is salary e1\n", e1.salary);
    printf("%s is name e1\n", e1.name);
    printf("\n");
    printf("%d is code e2\n", e2.code);
    printf("%.3f is salary e2\n", e2.salary);
    printf("%s is name e2\n", e2.name);
    printf("\n");
    printf("%d is code e3\n", e3.code);
    printf("%.3f is salary e3\n", e3.salary);
    printf("%s is name e3\n", e3.name);

    return 0;
}