#include <stdio.h>
#include <string.h>
int main(void){
  char name[20];
  double salary, sales;
  scanf("%s",name);
  scanf("%lf", &salary);
  scanf("%lf",&sales);
  printf("TOTAL = R$ %.2lf\n",(salary + sales*15/100));
  return 0;

}
