#include <stdio.h>
int main()
{
  /*int *b = &a*/   //this is short method
  /*
  int **c;
  c = &a;
  */                //This is long method
  //BOTH ARE VALID.
    int a = 12;
    int *b = &a;//*b will store the value of a
    int **c = *b;//**c will store the value of *b
    int ***d = *b;//The assagin operator = does not reconize the doubble star__(**)__.
    printf("the value of a is %d\n", a);
    printf("The value of b is %d\n", *b);
    printf("The Address of a is %u\n", &a);
    printf("The Address of b is %u\n", &b);
    /*if the value is same after compiling more then 3 times then your code might be mistsake
      for eg:-
                if you run this code for more then 3 times then   you will see the difference
                            int i;
                            pirntf("%d\n", i);
            the you can understand address.
    */
   //And to store the value we can also right this
   printf("The located Address of a we can write aslo like this of a is %u\n", &b);
   printf("The value of b is %u\n", *(&b));
   printf("The value of **c is %u\n", *(&b));
   printf("The value of **c is %u\n", **(&c));
return 0;
}