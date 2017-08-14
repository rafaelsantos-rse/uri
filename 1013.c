#include <stdio.h>
#include <math.h>
int main(void){
  double fabs(double x);
  int a, b, c, maior;
  scanf("%d %d %d",&a, &b, &c);
  maior = (a + b + fabs(a-b))/2;
  if (maior == a){
    b = c;
    maior = (a + b + fabs(a-b))/2;
    printf("%d eh o maior\n",maior);
  }else{
    a = c;
    maior = (a + b + fabs(a-b))/2;
    printf("%d eh o maior\n",maior);
  }
  return 0;
}