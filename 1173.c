#include <stdio.h>
int main(void){
 int len = 10;
 int N[len], n, i = 0;
 scanf("%d",&n);
 while(i < len){
  N[i] = n;
  printf("N[%d] = %d\n",(i), n);
  n*=2;
  i++;
 }
 return 0;
}