#include <stdio.h>
int main(void){
 int isPrime(int n);
 int t;
 scanf("%d",&t);
 while(t > 0){
  int n;
  scanf("%d",&n);
  if(isPrime(n) && n != 1){
   printf("%d eh primo\n",n);
  } else{
   printf("%d nao eh primo\n",n);
  }
  t--;
 }
 return 0;
}
int isPrime(int n){
 int i = 2;
 while(i < n){
  if(n % i == 0){
   return 0;
  }
  i++;
 }
 return 1;
}