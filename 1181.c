#include <stdio.h>
int main(void){
 int l, len =12, i = 0, j = 0;
 float  m[len][len], soma = 0;
 char d[1];
 scanf("%d",&l);
 scanf("%s",d);
 while(i < len){
  
  while(j < len){
   scanf("%f",&m[i][j]);
   if(i == l){
    soma += m[l][j];
   }
   j++;
  }
  j = 0;
  i++;
 }
 if(d[0] == 'S'){
  printf("%.1f\n",soma);
 }
 else if(d[0] == 'M'){
  printf("%.1f\n",soma/len);
 }
 /*
 i = 0;
 j = 0;
 while(i < len){
  printf("%d \t", i);
  while(j < len){
   printf("%f  ",m[i][j]);
   j++;
  }
  j = 0;
  printf("\n");
  i++;
 }*/
 return 0;
}