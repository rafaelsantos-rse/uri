#include <stdio.h>
#include <string.h>
int main(void){
 int coluna, len =3, i = 0, j = 0;
 char caractere[1];
 float M[len][len], soma;
 void printList(int len, float L[len][len]);
 scanf("%d",&coluna);
 scanf("%s",caractere);
 for(i = 0;i<len;i++){
  for(j = 0; j< len; j++){
   scanf("%f",&M[i][j]);
   if(j == coluna){
    soma += M[i][j];
   }
  }
 }
 if(caractere[0] == 'M'){
  printf("%.1f\n",soma/len);
 }
 else if(caractere[0] == 'S'){
  printf("%.1f\n",soma);
 }
 /*printList(len, M);*/
 return 0;
}

void printList(int len, float L[len][len]){
 int i, j;
 for(i=0;i<len;i++){
  for(j=0;j<len;j++){
   printf("[ %.1f ]  ",L[i][j]);
  }
  printf("\n");
 }
}