	/*Ler uma matriz 12x12
	  Ler um caracter S ou M
	  somar todos os elementos acima da diag. principal */ 
	#include <stdio.h>
	#include <string.h>

	int main(void){ 
		float M[12][12],s = 0, m = 0; /*soma*/
		int i, j; /*variaveis de indice*/  /*contador de elementos somados */
		char c, null;

		c = getchar();
		null = getchar();
		for(i = 0; i < 12; i++){
			for(j = 0; j < 12; j++){
				scanf("%f",&M[i][j]); /*numero aleatorio*/
				if (i + j < 11 && j > i){
					s = s + M[i][j];
					m = m +1;
				}
			}
		}
		if (c == 'M'){
			printf("%.1f\n",(float) s/m);	
		} 
		else if (c == 'S'){
			printf("%.1f\n",(float) s);
		} 	
		return 0;
	}