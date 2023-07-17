#include <stdio.h>

int main()
{

  int math;
  int science;
  int computer;
  float total;

  printf("Give Me Your math Marks Sheets");
  scanf("%d", &math);

  printf("Give Me Your science Marks Sheets");
  scanf("%d", &science);

  printf("Give Me Your computer Marks Sheets");
  scanf("%d", &computer);

  total = (math + science + computer) / 3;

  if ((total < 40) || math < 40 || science < 40 || math < 40)
  {
    printf("you failed the exam because you scored %f marks", total);
  }
  else
  {
    printf("you passed the exam because you scored %f marks", total);
  }
  if(total >= 90){
    printf("\nyou topped the exam");
  }
  
  return 0;
}