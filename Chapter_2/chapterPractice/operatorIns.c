#include<stdio.h>
 
int main(){

    int a = 5;
    int b = 4;
    int c;

    // printf("some of the possible and impossible operators %d\n", (a).(b));//this is not possible reason in note
    // printf("some of the possible and impossible operators %d\n", (a)(b));//this is also not possible reason in note
    printf("some of the possible and impossible operators %d\n", (a)*(b));//this is possible 

    // note:- some simiple tricks we used in maths are not applied in c this such as "(a).(b)" "(a)(b)"
    // but if we do "(a)*(b)" this is possible beacuse we have given the operator sign in the middle of the two 
    // oprants
return 0;
}