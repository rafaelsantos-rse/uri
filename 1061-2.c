#include <stdio.h>
#include <string.h>

int main(void){
	void getText(char *a);
	char txt[100];
	int d1, h1, m1, s1,d2, h2, m2, s2, M = 0;
	void timeCltr(int *T1, int *T2, int *t1, int *t2, int d/*difference*/);
	getText(txt);
	scanf("%d", &d1);
	scanf("%d : %d : %d",&h1, &m1, &s1);
	getText(txt);
	scanf("%d", &d2);
	scanf("%d : %d : %d",&h2, &m2, &s2);
	timeCltr(&m1, &s1, &m2, &s2, 60);
	timeCltr(&h1, &m1, &h2, &m2, 60);
	timeCltr(&d1, &h1, &d2, &h2, 24);
	timeCltr(&M, &d1, &M, &d2, 30);
	printf("%d dia(s)\n",d2);
	printf("%d hora(s)\n",h2);
	printf("%d minuto(s)\n",m2);
	printf("%d segundo(s)\n",s2);

	return 0;
}

void getText(char *a){
	char c;
	int i = 0;
	do{
		c = getchar();
		a[i] = c;
		i++;
	}while( c != ' ');
	a[i-1] = '\0';
}
void timeCltr(int *T1, int *t1, int *T2, int *t2, int d/*difference*/){
	if ( *t1 > *t2){
		*t2 += d;
		*T2 -= 1;
		*t2 -= *t1;
	} else{
		*t2 -= *t1;
	}
}