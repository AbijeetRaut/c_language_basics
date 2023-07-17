#include <stdio.h>
int main()
{
    int n_students = 3, n_subject = 5;
    int marks[3][5];

    for (int i = 0; i < n_students; i++)
    {
        for (int j = 0; j < n_subject; j++)
        {
            printf("Enter you marks in %d subject of %d student is\t", j + 1, i + 1);
            scanf("%d", &marks[j][i]);
        }

        for (int i = 0; i < n_students; i++)
        {
            for (int j = 0; j < n_subject; j++)
            {
                printf("The marks you have insert in %d student in %d subject is %d\n", i + 1, j + 1, marks[i][j]);
            }
        }
    }

    return 0;
}