#include <stdio.h>
int main(void){
  /*double S(double a, double b);
  double s = S(3,2);
  printf("%.2lf\n",s);*/
  double s2 = 1;
  double i = 3, j = 2;
  while (i <= 39){
    s2+= i / j;
    i+=2;
    j+=2;
  }
  printf("%.2lf\n",s2);  
  return 0;
}
double S(double a, double b){
  if(a == 39){
    return 1+ a/b;
  } else{
    return a/b + S( (a+2), (b+2) );
  }

}