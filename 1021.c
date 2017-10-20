#include <stdio.h>
int main(void){

	void decomporR(double *a, int *b);
	void decomporC(double *a, double *b);
	int Reais[6] = {100, 50, 20, 10, 5, 2 }, i, *Ip;
	double Centavos[6] = {1.0, 0.5, 0.25, 0.10, 0.05, 0.01}, *dinheiro, *Fp, d;


	scanf("%lf",&d);
	dinheiro = &d;

	Ip = &Reais[0];
	printf("NOTAS:\n");
	for (i = 0; i < 6; i++){
		decomporR(dinheiro, Ip);
		Ip++;
	}

	Fp = &Centavos[0];
	printf("MOEDAS:\n");
	for (i = 0; i < 6; i++){
		decomporC(dinheiro, Fp);
		Fp++;
	}

	return 0;
}

void decomporR(double *a, int *b){
	int c = 0;
	if(*b <= 100 && *b >= 2){
		while (*a >= *b){
			*a -= *b;
			c++;
		}
	}
	printf("%d nota(s) de R$ %d.00\n", c, *b);
}
void decomporC(double *a, double *b){
 	int c = 0;
	if(*b <= 1.00){
		// there is some problem with the 0.010000 in C (thus, in python). I need to figure it out.
		//printf("b = %lf a = %lf\n",*b, *a);
		*a += 0.000010;
	 	while (*a >= *b){
	 		*a -= *b;
	 		c++;
	 	}
	
	}	
	printf("%d moeda(s) de R$ %.2lf\n",c, *b);
}
