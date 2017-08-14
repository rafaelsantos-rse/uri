#include <stdio.h>
#include <math.h>
int main(void){
  float a, b, c, r1, r2;
  scanf("%f %f %f",&a, &b, &c);
  if (b*b < 4*a*c || a == 0.0){
    printf("impossivel calcular\n");
  } else{
    r1 = (-b + sqrt(b*b - 4*a*c))/2*a;
    r2 = (-b - sqrt(b*b - 4*a*c))/2*a;
    printf("R1 = %.5f\n",r1);
    printf("R2 = %.5f\n",r2);
  }
  return 0;
}
