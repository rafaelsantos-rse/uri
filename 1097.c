/* URI 1097*/ 
#include <stdio.h>
int main(void){
  int i = 1, j = 7, count = 0;
  printf("I=%d J=%d\n",i,j);
  count++;
  while (i <= 9){
    if (count < 3){
      j-=1;
      printf("I=%d J=%d\n",i,j);
      count ++;
    } else {
      count = 0;
      i += 2;
      j += 4  ;
      if( i <= 9){
      printf("I=%d J=%d\n",i,j);
        }
      count++;
    }

  }

  return 0;
}