#include <stdio.h>
int main(void){
  double S(double n);
  double j = 1;
  double s = S(j);
  printf("%.2lf\n",s);
  double i = 2;
  double s2 = 1;
  while (i <= 100){
    s2 += 1/i;
    i++;
  }
  printf("%.2lf\n",s2);
  return 0;
}

double S(double n){
  if(n == 100){
    return 1/n;
  } else{
    return 1/n + S(n + 1);
  }
}