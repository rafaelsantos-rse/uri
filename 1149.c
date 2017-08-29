#include <stdio.h>
int main(void){

  int a, n, i = 1, sum = 0;
  scanf("%d %d",&a, &n);
  while(n <= 0){
    scanf("%d",&n);
  }
  sum = a;
  a++;
  while (i < n){
    sum += a;
    a++;
    i++;
  }
  printf("%d\n",sum);


  return 0;
}