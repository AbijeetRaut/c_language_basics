#include <stdio.h>
int main()
{
    FILE *pointer;
    int num, num2;
    pointer = fopen("abijeet.txt", "r");
    fscanf(pointer, "%d", &num);
    fscanf(pointer, "%d", &num2); 
    
    printf("%d\n", num); //the file refrence are readed by the spaces given in the refrence file which is in my case abijeet.txt
    printf("%d", num2);
    fclose(pointer);
    return 0;
}
// using the --> fclose is the process of using the opened file which is abijeet.txt in my case. 