#include <stdio.h>
int main(void){
  int n, i = 0, x, y, soma;
  scanf("%d",&n);
  while (i < n){
    scanf("%d %d",&x, &y);
    soma = 0;
    if (x > y){
      while (y < x){
        y++;
        if( (y % 2 != 0) && y < x){
          soma+=y;
        }
      }

    } 
    else if (y > x){
      while (x < y){
        x++;
        if((x % 2 != 0) && x < y){
          soma+=x;
        }
      }
    }
    printf("%d\n",soma);
    i++;
  }
	
	return 0;
}