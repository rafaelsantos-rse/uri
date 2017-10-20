#include <stdio.h>
int main(void){
	int t;
	do{
		scanf("%d",&t);
		register int i, j;
		int M[t][t];
		int a = 0,  x = 1, c = 0;

		for(i = 0; i < t; ++i) for(j = 0; j < t; ++j) M[i][j] = 0;
		
		do{
			for(i = 0; i < t; ++i) {
				for(j = 0; j < t; ++j){
					if(i - j == a || j - i == a){
						if (M[i][j] == 0){
							M[i][j] = x;
							++c;
						}
					}
				}
			}
			++a;
			++x;
		}while(c < t*t)	;

		for(i = 0; i < t; ++i) for(j = 0; j < t; ++j) (j == t-1) ? printf("%d\n",M[i][j]) : printf("%d\t",M[i][j]);
	}while(t != 0);
	return 0;
}	