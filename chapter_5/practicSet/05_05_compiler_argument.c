#include<stdio.h>
 
int main(){

    int a = 3;
     printf("%d %d %d", a, ++a, a++);
    /*
    NOTE:--
            basically it depends on the compiler.
            some compiler runs on the left to right. 
            but GCC compiler which i use runs on the right to left.
    

    */
   printf(" %d", a++);   // ans 3
   printf(" %d", ++a);   // ans 5
   printf(" %d", a);     // ans 5
   


return 0;
}