#include <stdio.h>
typedef struct date
{
    int day;
    int month;
    int year;
} date;

int date_compare(date d, date d1)
{
    if (d.year>d1.year)
    {
        printf("d");
    }
    else if(d.month > d1.month)
    {
        printf("d");
    }
    else if (d.day > d.day)
    {
        printf("d");
    }
    else if (d1.year > d.year)
    {
        printf("d1");
    }
    else if (d1.month > d.month)
    {
        printf("d1");
    }
    else if (d1.day > d.day)
    {
        printf("d1");
    }
    
    
    
    else
    {
        return 0;
    }
}

void display(date d)
{
    printf("The date is: %d/%d/%d\n", d);
}

int main()
{
    date d = {1, 9, 2023};
    date d1 = {1, 10, 2025};
    display(d);
    display(d1);
    int compare;
    date_compare(d, d1);
    

    return 0;
}