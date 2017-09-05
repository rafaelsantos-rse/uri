#include <stdio.h>
int main(void){
 int len = 100, i = 0;
 double N[100], x;
 scanf("%lf",&x);
 while (i < len){
  N[i]  = x;
  x = x / 2;
  printf("N[%d] = %.4lf\n",i, N[i]);
  i++;
 }

 return 0;
}