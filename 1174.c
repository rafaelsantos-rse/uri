#include <stdio.h>
int main(void){
 int len = 100, k = 0;
 float A[len];
 while (k < len){
  scanf("%f",&A[k]);
  k++;
 }
 k = 0;
 while (k < len){
  if(A[k] <= 10){
   printf("A[%d] = %.1f\n",k, A[k]);
  }
  k++;
 }
 return 0;
}