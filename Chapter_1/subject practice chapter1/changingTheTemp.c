#include<stdio.h>

int main(){
    float celsius;
    float fahrenite;

    printf("give the numebr of the celsius to change in fahrentie %f\n", celsius);
    scanf("%f", &celsius);
     
     fahrenite = (celsius * 9/5)+35;

     printf("heres your output %f", fahrenite);

     return 0;

}