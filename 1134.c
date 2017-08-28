#include <stdio.h>
int main(void){
  int a = 0, g = 0, d = 0, user;
  do{

    scanf("%d",&user);

    switch (user){
      case 1: 
        a++;
        break;
      case 2:
        g++;
        break;
      case 3:
        d++;
        break;
      case 4:
        break;
    }

  }while(user != 4);
  printf("MUITO OBRIGADO\n");
  printf("Alcool: %d\n",a);
  printf("Gasolina: %d\n",g);
  printf("Diesel: %d\n",d);

	return 0;
}