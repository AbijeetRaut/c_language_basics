#include <stdio.h>
#include<math.h>
#include <string.h>
int main()
{
    //the reason behind why i had given %d on float and char is
    //--->       output ta int ko form ma aaune ho ni ta bro
    printf("the size of int in your computer is %d\n", sizeof(int));
    printf("the size of float in your computer is %d\n", sizeof(float));
    printf("the size of char is %d\n", sizeof(char));
    printf("the size of double is %d\n", sizeof(double));
    printf("the size of pow is %d\n", sizeof(pow));
    printf("the size of string is %d\n", sizeof(strcpy));
    printf("the size of strcmp is %d", sizeof(strcmp));
return 0;
}