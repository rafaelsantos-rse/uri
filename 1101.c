/*URI 1101*/
#include <stdio.h>
int main(void){
  int m, n, soma;
  scanf("%d %d",&m, &n);
  while(m > 0 && n >0 ){
    if (m > n){
      soma = n;
      printf("%d ",n);
      while (n < m){
        n++;
        soma+=n;
        printf("%d ",n);
      }
    }
    else if(n > m){
      soma = m;
      printf("%d ",m);
      while (m < n){
        m++;
        soma+=m;
        printf("%d ",m);
      }
    }
    else {
      soma = m + n;
    }
    printf("Sum=%d\n",soma);
    scanf("%d %d",&m, &n);
  }

  return 0;
}