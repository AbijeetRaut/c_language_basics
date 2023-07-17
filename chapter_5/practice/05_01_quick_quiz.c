//it has been accessed form the down part where these code has been writeen inside the denoted word or syntex.
//it is mostly used when you are using making a larger program and you want to make a program more readiblity and clear then you have to use to make your program clear.  
#include <stdio.h>
void morning();
void Evening();
void night();
void wrong();
void startingDetail();
void Command();
int main()
{

    startingDetail();

    Command();

    return 0;
}

void morning()
{
    printf("Hello and good morning to Every one\n");
}

void Evening()
{
    printf("Hello and good Evening to Every one\n");
}

void night()
{
    printf("Hello and good night to all of you have a sweet dream\n");
}

void wrong()
{
    printf("sorry your input is higher then 24 hrs so check again and try again\n");
}

void startingDetail()
{
    printf("warning! program is made on the basis on the 24 hrs time\n");
}

void Command()
{
    int time = 1;

    printf("Enter the time\t");
    scanf("%d", &time);

    if (time <= 12)
    {
        morning();
    }

    if (time >= 12 && time <= 18)
    {
        Evening();
    }
    
    if (time >= 19 && time <= 24)
    {
        night();
    }

    if (time > 24)
    {
        wrong();
    }
}
