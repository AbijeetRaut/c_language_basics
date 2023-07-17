#include <stdio.h>
typedef struct day
{
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int second;

} date;

void date_print(date d)
{
    printf("the date you have entered are: %d/%d/%d %d-%d-%d\n", d.year, d.month, d.day, d.hour, d.minute, d.second);
}
int D_cmp(date d1, date d2)
{
    if (d1.year > d2.year)
    {
        printf("d1 wins");
    }
    if (d1.month > d2.month)
    {
        printf("d1 wins");
    }
    if (d1.day > d2.second)
    {
        printf("d1 wins");
    }
    if (d1.hour > d2.hour)
    {
        printf("d1 wins");
    }
    if (d1.minute > d2.minute)
    {
        printf("d1 wins");
    }
    if (d1.second > d2.second)
    {
        printf("d1 wins");
    }
    if (d2.year > d1.year)
    {
        printf("d2 wins");
    }
    if (d2.month > d1.month)
    {
        printf("d2 wins");
    }
    if (d2.day > d1.second)
    {
        printf("d2 wins");
    }
    if (d2.hour > d1.hour)
    {
        printf("d2 wins");
    }
    if (d2.minute > d1.minute)
    {
        printf("d2 wins");
    }
    if (d2.second > d1.second)
    {
        printf("d2 wins");
    }
}
int main()
{
    date d1 = {2022, 7, 5, 13, 12, 24};
    date d2 = {2023, 7, 5, 13, 12, 24};

    date_print(d1);
    date_print(d2);

    int dec = D_cmp(d1, d2);
    dec;
    return 0;
}