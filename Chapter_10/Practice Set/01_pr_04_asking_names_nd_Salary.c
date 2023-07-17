#include <stdio.h>
int main()
{
   FILE *pointer;
   pointer = fopen("04_office.txt", "w");

   char name[50][5];
   int salary[5];

      printf("Enter your name\n");
      gets(name);
      printf("Enter your salary\n");

      scanf("%d", &salary);
      fprintf(pointer, "name: %s\t\t\t & salary:\t\t\t %d\n", name, salary);

   fclose(pointer);
   return 0;
}