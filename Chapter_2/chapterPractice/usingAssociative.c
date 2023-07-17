#include<stdio.h>
 
int main(){

    int x = 2;
    int y = 2;

    printf("the value of 3*x / 3*y %d\n", 3*x / 3*y);
   // it works will like this because we hasn't used associative it works like
   //  --->   (without using Associative) <---
    // 3*2 / 3*2 
    // 6 / 3*2 
    // 2*2 
    // 4 
    // if the two operator are givem of the same priotity level then we have to use the Associative

    //conclusion:- * and / follows the left to right Associative
    // for eg:- 
    //3*x / y
    //(3*x) / y
    //while using Associative we have to seprate the both 1st priority sign and the fist given operator will be 
    //covered with bracket
     


return 0;
}