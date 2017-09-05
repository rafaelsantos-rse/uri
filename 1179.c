#include <stdio.h>
int main(void){
 int len = 5, n, par[len], impar[len], t = 15, p = 0, i = 0;
 while(t > 0){
  scanf("%d",&n);
  if(n % 2 == 0){
   par[p] = n;
   p++;
  } else{
   impar[i] = n;
   i++;
  }
  if(i == 5){
   int k = 0;
   while(k < i){
    printf("impar[%d] = %d\n",k, impar[k]);
    k++;
   }
   i = 0;
  }
  if(p == 5){
   int k = 0;
   while(k < p){
    printf("par[%d] = %d\n",k, par[k]);
    k++;
   }
   p = 0;
  }
  t--;
 }
 if(i > 0){
  int k = 0;
  while(k < i){
    printf("impar[%d] = %d\n",k, impar[k]);
    k++;
   }
 }
 if(p >0){
  int k =0;
  while(k < p){
    printf("par[%d] = %d\n",k, par[k]);
    k++;
   } 

 }
 return 0;
}