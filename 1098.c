/* URI 1098*/ 
#include <stdio.h>
int main(void){
  int a = 0, b = 1, count = 0;
  while (count < 3){
  printf("I=%d J=%d\n",a,b);
  b++;
  count ++;
  }
  float i = 0.2, j = 1.2;
  printf("I=%.1f J=%.1f\n",i,j);
  count = 0;

  count++;

  while (i < 0.9){
    if(count < 3){
      j++;
      printf("I=%.1f J=%.1f\n",i,j);
      count++;
    } else{
      count = 0;
      i += 0.2;
      j = j - 2 + 0.2;
      if(i < 0.9){
        printf("I=%.1f J=%.1f\n",i,j);
      }
      count ++;

    }
  }
  a = 1, b = 2, count = 0;
  while (count < 3){
  printf("I=%d J=%d\n",a,b);
  b++;
  count ++;
  }
  i = 1.2, j = 2.2;
  count = 0;
  printf("I=%.1f J=%.1f\n",i,j);
  count++;

  while (i < 1.9){
    if(count < 3){
      j++;
      printf("I=%.1f J=%.1f\n",i,j);
      count++;
    } else{
      count = 0;
      i += 0.2;
      j = j - 2 + 0.2;
      if(i < 1.9){
        printf("I=%.1f J=%.1f\n",i,j);
      }
      count ++;

    }
  }


  a = 2, b = 3, count = 0;
  while (count < 3){
  printf("I=%d J=%d\n",a,b);
  b++;
  count ++;
  }

  return 0;
}