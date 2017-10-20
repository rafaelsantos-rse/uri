/* há uma cidade A e outra B. A é sempre menos populosa que B, porém têm uma taxa de crescimento maior.
 Quanto tempo leva para A ser maior que B ? */

#include <stdio.h>

int main(void){
	unsigned int T, /*número de testes*/ 
				 PA,/*população de A*/
				 PB,/*população de B*/
				 t /*tempo de ultrapassagem*/;

	float GA,/*taxa de crescimento polulacional por ano de A */
		  GB/*taxa de crescimento polulacional por ano de B */;
	scanf("%u",&T);
	while(T > 0){
		scanf("%u %u %f %f",&PA,&PB,&GA,&GB);
		t = 0;
		do{	
			++t;
			PA = PA + (int) PA*GA/100;
			PB = PB + (int) PB*GB/100;
		}while(PA <= PB);
		(t > 100) ? printf("Mais de um seculo.\n") : printf("%u anos.\n",t);
		--T;
	}

	return 0;
}
