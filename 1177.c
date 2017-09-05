#include <stdio.h>
int main(void){
 int len = 1000, N[len], T, k = 0, i = 0;
 scanf("%d",&T);
 while(k < len){
  if(i == T){
   i = 0;
  }
  N[k] = i;
  i++;
  printf("N[%d] = %d\n",k, N[k]);
  k++;
 }
 return 0;
}