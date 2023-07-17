#include <stdio.h>
#include <string.h>
typedef struct siddhartha_bank
{
    char name[20];
    int account_no;
    float money;
} siddhartha_bank;
int main()
{
    int acc;
    siddhartha_bank name;
    // printf("Enter your name\t");a
    // scanf("%s", &name.name);
    puts("enter name");
    gets(name.name);

    printf("Enter your account no\t");
    scanf("%d", &name.account_no);

    printf("Enter your money you want to deposit\t");
    scanf("%f", &name.money);

    printf("YOUR ACCOUNT HAS BEEN CREATEED & MONEY HAS BEEN DEPOSITED\n");

    printf("Enter account no\t");
    scanf("%d", &acc);

    if (acc >= 101 && acc <= 200)
    {
        printf("name = %s\n", name.name);
        printf("account = %d\n", name.account_no);
        printf("money = %.2f\n", name.money);
    }
    else
    {
        printf("you haven't created a account");
    }

    return 0;
}