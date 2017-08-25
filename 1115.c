#include <stdio.h>

int main(void){
  int x = 1, y = 1;
  scanf("%d %d",&x,&y);
  while (x != 0 && y != 0){
    if(y > 0){
      if(x > 0){
        printf("primeiro\n");
      }
      else if(x < 0){
        printf("segundo\n");
      }
    }
    else if( y < 0){
      if (x < 0){
        printf("terceiro\n");
      }
      else if(x > 0){
        printf("quarto\n");
      }
    }
    scanf("%d %d",&x,&y); 
  }
  return 0;
}