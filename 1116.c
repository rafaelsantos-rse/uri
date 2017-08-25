#include <stdio.h>
int main(void){
  int n, i = 0;
  double a, b;
  scanf("%d",&n);
  while (i < n){
    scanf("%lf %lf",&a,&b);
    if (b == 0 || b == 0.0){
      printf("divisao impossivel\n");
    } else{
      a = a/b;
      printf("%.1lf\n",a);
    }
    i++;
  }


  return 0;
}
