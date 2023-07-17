#include<stdio.h>
 
int main(){

    float p;
    float t;
    float r;
    float SI;
    printf("give the value for %f\n", p, t, r);
    scanf("%f%f%f", &p,&t,&r);

    SI = p * t *r /100;

    printf("the si unit of the given sum is %f\n", SI);

return 0;
}