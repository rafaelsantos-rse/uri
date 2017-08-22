#include <stdio.h>
int main(void){

	int d1, h1, m1, s1, d2, h2, m2, s2;
	char c;

	printf("Dia ");
	scanf("%d",&d1);
	scanf("%d %c %d %c %d",&h1,&c,&m1,&c,&s1);
	printf("Dia ");
	scanf("%d",&d2);
	scanf("%d %c %d %c %d",&h2, &c, &m2, &c, &s2);

	int d, h, m, s;
	d  = d2 - d1 - 1;
	h = 23 - h1 + h2;
	m = 59 - m1 + m2;
	s = 60 - s1 + s2;
	if (s >= 60){
		s = s - 60;
		m++;
	}
	if (m >= 60){
		m = m - 60;
		h++;
	}
	if (h >= 24){
		h = h - 24;
		d++;
	}
	printf("%d dia(s)\n",d);
	printf("%d hora(s)\n",h);
	printf("%d minuto(s)\n",m);
	printf("%d segundo(s)\n",s);
	return 0;
}

