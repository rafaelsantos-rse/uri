#include <stdio.h>
int main(void){
  int a, b, r;
  scanf("%d %d",&a, &b);
  if (a > b){
    r = a%b;
    if (!r) {
      printf("Sao Multiplos\n");
    } else {
      printf("Nao sao Multiplos\n");
    }
  }
  else if(b > a){
    r = b%a;
    if (!r) {
      printf("Sao Multiplos\n");
    } else {
      printf("Nao sao Multiplos\n");
    }
  } 
  else {
    r = a%b;
    printf("Sao Multiplos\n");
  }
  return 0;
}