#include <stdio.h>
int func(int a, int b, int *sum, float *average);
int main()
{
    int x = 8, y = 9, sum;
    float average;
    func(x, y, &sum, &average);
    printf("the sum of the two number is %d\n", sum);
    printf("the average of the two number is %f\n", average);

return 0;
}
int func(int a, int b, int *sum, float *average)
{
    *sum = a + b;
    *average = (float)(*sum)/2;
}