#include <stdio.h>
#include <math.h>
int main(void){
  int triangle(float a, float b, float c);
  float A, B, C;
  scanf("%f %f %f",&A, &B, &C);
  if (triangle(A, B, C)){
    printf("Perimetro = %.1f\n",(A+B+C));
  } else {
    printf("Area = %.1f\n",((A+B)*C/2));
  }

  return 0;
}
int triangle(float a, float b, float c){
  double fabs(double x);
  if (fabs(b - c) < a && a < b + c){
    return 1;
  }
  else if (fabs(a - c) < b && b < a + c ){
    return 1;
  }
  else if (fabs(a - b) < c && c < a + b){
    return 1;
  } else {
    return 0;
  }
}