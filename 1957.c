#include <stdio.h>
int main(void){
  int pow(int number, int exp);
  int len = 100, L[len], i=0, a, count = 0;
  while(i <= len){
    L[i] = -1;
    i++;
  }
  i--;
  scanf("%d",&a);
  while(a > 16){
    L[i] = a % 16;
    i--;
    a = ( a - (a%16) ) / 16;
    count++;
  }
  L[i] = a;
  count++;
  int j = len;
  int b = count -1;
  int soma = 0;
  while(j > len-count){
    soma += L[j]*pow(16, b);
    j--;
    b--;
  }
  printf("soma = %d\n",soma);
  return 0;
}

int pow(int number, int exp){
  int product = 1;
  while(exp > 0){
    product *= number;
    exp--;
  }
  return product;
}