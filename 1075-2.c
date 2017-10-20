#include <stdio.h>

int main(void){
	int modulo(int D, int d);
	int n, i;
	scanf("%d", &n);
	for(i = 1; i <= 10000; i++){
		if ( modulo(i, n) == 2){
			printf("%d\n", i);
		}
		// acho que o C não tem o operador restor;
	}
	return 0;
}

int modulo(int D, int d){
	if(D < d){
		return D;
	} else{
		while(D >= d){
			D-=d;
		}
		return D;  
	}	
}