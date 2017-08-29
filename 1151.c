#include <stdio.h>
int main(void){
  int n, a = 0, b = 1, c, aux;
  scanf("%d",&n);
  if( n == 1 ){
    printf("%d\n",a);
  }
  else if (n == 2){
      printf("%d %d\n",a,b);
    }
  else if(n > 2){
    aux = n;
    while(n >= 1){

      if( n == aux){
        printf("%d ",a);
      }
      else if (n == aux-1){
        printf("%d ",b);
      }
      else{
        c = a + b; 
        a = b; 
        b = c;
        if (n == 1){
          printf("%d\n",c);
        }
        else{
          printf("%d ",c);
        }
      }
      n--;
  }
  
    
    
  }



  return 0;
}