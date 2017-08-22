#include <stdio.h>
int main(void){
  int n, i = 0, count = 0;
  while (i < 5){
    scanf("%d",&n);
    if(n % 2 == 0){

      count++;
    }
    i++;
  }
  printf("%d valores pares\n",count);

  return 0;
}