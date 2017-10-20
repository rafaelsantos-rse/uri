#include <stdio.h>
int main(void){
	void Media(void);
	Media();
	return 0;
}

int isValid(double n){
	if (n <= 10 && n >= 0){
		return 1;
	} else{
		printf("nota invalida\n");
		return 0;
	}
}

void Media(void){
	int isValid(double n);
	int r = 1;
	do{
		double n1, n2, m = 0;
		do{
			scanf("%lf", &n1);
		} while (!isValid(n1));
		do{
			scanf("%lf", &n2);
		} while (!isValid(n2));
		m = (n1 + n2) / (double) 2;
		printf("media = %.2lf\n", m);
		do{
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &r);
		}while (r != 1 && r != 2);

	}while(r == 1);
}