#include<stdio.h>
 
int main(){
    for (int i = 10; i >= 1; i--)
    {
        int reduce_by = i - 1;
        printf("%d\n", reduce_by);
    }
return 0;
}