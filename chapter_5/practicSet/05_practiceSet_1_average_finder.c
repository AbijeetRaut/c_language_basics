#include<stdio.h>
 
float solution(float a, float b, float c);

int main(){

    float x, y, z;

    printf("Enter the value to calculate the average\n");
    scanf("%f%f%f", &x,&y,&z);

    printf("the average of the given value is %f", solution(x , y, z));
return 0;
}
float solution(float a, float b, float c){
    float result;
    result = (a + b + c) / 3;

    return result;
}