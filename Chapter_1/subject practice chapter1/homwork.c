#include<stdio.h>
int main(){
    int length, breath, area;
    printf("give the length of the rectacgle %d\n", length);
    scanf("%d", &length);

    printf("give the breath of the recatangle %d\n", breath);
    scanf("%d", &breath);

    area = length * breath;

    printf("the area of the rectangle is %d", area);
    return 0;

}