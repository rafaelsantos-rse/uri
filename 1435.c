#include <stdio.h>
int main(void){
	int t /*tamanho da matriz */, a, b, x, c; /*seguradores*/ 
	register int i, j;/*indices */
	do{
		scanf("%d",&t);
		int M[t][t];
		for(i = 0; i < t; ++i) for(j = 0; j < t; ++j) M[i][j] = 0;
		a = 0;
		b = t-1;
		x = 1;
		c = 0;
		do{
			for(i = 0; i < t; ++i) {
				for(j = 0; j < t; ++j){
					if( i == a || i == b || j == a || j == b){
						if (M[i][j] == 0){
							M[i][j] = x;
							++c;
						}
					}
				}
			}
			++a;
			--b;
			++x;
		}while(c < t*t)	;
		for(i = 0; i < t; ++i) for(j = 0; j < t; ++j) (j == t-1) ? printf("%d\n",M[i][j]) : printf("%d\t",M[i][j]);
	}while(t != 0);
	return 0;
}	