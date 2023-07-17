#include <stdio.h>
struct facebook_emp
{
    int code;
    float salary;
    char name;
};

int main()
{
    int i = 0;
    struct facebook_emp e[i];
    
    for ( i = 0; i < 5; i++)
    {

        printf("Enter the code\t");
        scanf("%d", &e[i].code);

        printf("Enter the salary\t");
        scanf("%f", &e[i].salary);

        printf("Enter the name\t");
        scanf("%s", e[i].name);
    }

    for (int a = 0; a < 5; a++)
    {
        printf("code of facebook employee is %d\t", e[a].code);
        printf("code of facebook employee is %f\t", e[a].salary);
        printf("code of facebook employee is %s\t", e[a].name);
    }

    return 0;
}