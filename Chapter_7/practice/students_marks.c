#include <stdio.h>
int main()
{
    int array[3][5];
    //array[3] is no_of_subject
    //arrray[5] is no_of_student
    for (int a = 0; a <= 2; a++)
    {
        for (int b = 0; b <= 4; b++)
        {
            printf("Enter the marks of the student %d and in %d subject\t", a + 1, b + 1);
            scanf("%d", &array[a][b]);
        }
    }
    for (int c = 0; c <= 2; c++)
    {
        for (int i = 0; i <= 4; i++)
        {
            printf("the marks that you have entered in %d student in %d are %d\n", c + 1, i + 1, array[c][i]);
        }
    }
    return 0;
}