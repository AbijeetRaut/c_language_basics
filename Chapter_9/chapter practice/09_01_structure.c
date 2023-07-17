#include <stdio.h>
#include <string.h>

struct employe
{
    int code;
    float salary;
    char name[45];
};

//NOTE:- 
//      MAINLY SEMI-COLUMN IS NOT IMPORTANT FOR OTHER FUNCTION DECLERATION.
//                        BUT        
//      FOR THE STRUCT SEMI-COLUMN IS IMPORTANT
int main()
{
    struct employe e1;
    e1.code = 121;
    e1.salary = 123.12;
    strcpy(e1.name, "abijeet");

    printf("%d is employe code\n", e1.code);
    printf("%f is salary\n", e1.salary);
    printf("%s is name of employe\n", e1.name);
    return 0;
}
/*
            how does it work?
# it takes refrence from struct employee which consist the code, salary, name.

# when the programmer call the struct function then function it will access the pre-defiened function
called code, salary, name

# by struct employe e1;
    e1
    we can use the statement
*/

//NOTE :- 
//       IT WILL CREATE A NEW TEMP DATA TYPE WHICH IS ONLY ACCESSIBLE FROM THE DEFINED FUNCTION.