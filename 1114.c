#include <stdio.h>
int main(void){
  int password = 2002, input = 0;
  while (input != password){
    scanf("%d", &input);
    if(input == password){
      printf("Acesso Permitido\n");
    } else{
      printf("Senha Invalida\n");
    }
  }

  return 0;
}