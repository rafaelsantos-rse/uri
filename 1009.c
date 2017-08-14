#include <stdio.h>
#include <string.h>
int main(void){
  double salary, sales;
  scanf("%lf", &salary);
  scanf("%lf",&sales);
  printf("TOTAL = R$ %.2lf\n",(salary + sales*15/100));
  return 0;

}
