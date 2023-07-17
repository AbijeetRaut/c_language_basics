#include <stdio.h>

float force(float mass);

int main()
{

    float mas;

    printf("Enter the value of the mass in KG\n");
    scanf("%f", &mas);

    printf("the result of the conversoin of the KG to newton is %.3f", force(mas));

    return 0;
}

float force(float mass)
{
    float result;
    result = mass * 9.8;
    return result;
}
