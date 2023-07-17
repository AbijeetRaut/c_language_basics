#include<stdio.h>
#include<math.h>
 
int main(){

    int areaOfSide;

    printf("Enter the area of side\n");
    scanf("%d", &areaOfSide);

    printf("the area of square is %f\n", pow(areaOfSide, 4));
return 0;
}
//note:- pow doesnot support dubble data type.
//so i used float sign insted of int
//because int is a single data type 
//flaot carry numbers in it so it is a dubble data type.