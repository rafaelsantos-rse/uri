#include <stdio.h>
int main(void){
  int n;
  int fatorial(int number);
  scanf("%d",&n);
  printf("%d\n",fatorial(n));

  return 0;
}
int fatorial(int number){
  if(number == 1){
    return 1;
  }
  else{
    return number*fatorial(number-1);
  }
}