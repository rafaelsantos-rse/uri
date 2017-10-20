#include <stdio.h>
#include <string.h>

int main(void){
	void getText(char *a);
	char txt[100];
	int d1, h1, m1, s1 ,d2, h2, m2, s2;
	void timeCltr(int *T1, int *T2, int *t1, int *t2, int d/*difference*/);
	getText(txt);
	scanf("%d", &d1);
	scanf("%d : %d : %d",&h1, &m1, &s1);
	getText(txt);
	scanf("%d", &d2);
	scanf("%d : %d : %d",&h2, &m2, &s2);
	timeCltr(&m1, &s1, &m2, &s2, 60);
	timeCltr(&h1, &m1, &h2, &m2, 60);
	timeCltr(&m1, &s1, &m2, &s2, 24);

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
void timeCltr(int *T1, int *T2, int *t1, int *t2, int d/*difference*/){
	if ( *t1 > *t2){
		*t2 += d;
		*T2 -= 1;
		*t2 -= *t1;
	} else{
		*t2 -= *t1;
	}
}