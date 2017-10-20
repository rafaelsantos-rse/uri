#include <stdio.h>
int main(void){
	int h1, h2, m1, m2, ht, mt;
	scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
	if (m1 > m2){
		m2 += 60;
		h2 -= 1;
		mt = m2 - m1;
		if (h1 > h2){
			ht = 24 - h1 + h2;
		} else{
			ht = h2 - h1;
		}

	} else{
		mt = m2 - m1;
		if (h1 > h2){
			ht = 24 - h1 + h2;
		} else{
			ht = h2 - h1;
		}
	}
	if (ht == 0 && mt == 0){
		ht = 24;
	}
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", ht, mt);
	return 0;
}