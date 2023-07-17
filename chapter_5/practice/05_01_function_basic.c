#include <stdio.h>
void display();
void conclusion();
int main()
{

    printf("Guess what gonna happen");
    display();
    printf("this has happend\n");
    display();
    conclusion();
    return 0;
}
void display()
{
    for (int i = 0; i < 10; i++)
    {
        printf("This is %d\n", i);
    }
}

void conclusion()
{
    printf("for eg:-");
    printf("if you write on the function and if you want to run multiple time then it will as usual");
    printf("see the example of void display");
}