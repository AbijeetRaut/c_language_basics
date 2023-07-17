#include <stdio.h>

float faher(float celsius, float fah);
float cels(float fahernite, float celsius);
void class();
int main()
{
     
    
    float ToCelsius = 1;
    float ToFahernhite = 2;

    printf("in which class do you want to change\n");
    printf("1. ToCelsius\n2. ToFahernhite\n");
    scanf("%f%f", &ToCelsius, &ToFahernhite);
    if (ToCelsius = 1)
    {
        float faa, cee;
        printf("Enter a number to change fahernhite to celsius\n");
        scanf("%f", &faa);
        printf("output of the calculation is %f", cels(faa, cee));
    }
    else if (ToFahernhite = 2)
    {
        float c, f;
        printf("Enter a number to change the celsius to fahernhite\n");
        scanf("%f", &c);
        printf("output of the calculation of the celsius to fahernhite is %f", faher(c, f));
    }

    return 0;
}

float cels(float fahernite, float celsius)
{
    float result;
    result = (fahernite - 32) * 5 / 9;
    return result;
}
float faher(float fahernite, float celsius)
{
    float result;
    //(0°C × 9/5) + 32 = 32°F
    result = (celsius * 9 / 5) + 32;
    return result;
}

void class()
{
   
    
    
 
}