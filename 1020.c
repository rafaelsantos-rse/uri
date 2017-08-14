#include <stdio.h>

int func(int n1, int n2){
	if (n1 >= n2)
	{ 
		int n  = (n1 - n1%n2)/n2;
		switch (n2){
			case 365: 
				printf("%d ano(s)\n",n);
				break;
			case 30: 
				printf("%d mes(es)\n",n);
				break;
			case 1: 
				printf("%d dia(s)\n",n);
				break;
		}
		return n1 % n2;
		
	} else {
		int n = 0;
		switch (n2){
			case 365: 
				printf("%d ano(s)\n",n);
				break;
			case 30: 
				printf("%d mes(es)\n",n);
				break;
			case 1: 
				printf("%d dia(s)\n",n);
				break;
		}
		return n1;

	}
}

int main(void){
	int list[3], i = 0, d;
	list[0] = 365;
	list[1] = 30;
	list[2] = 1;
	scanf("%d",&d);

	while (i < 3){
		d = func(d, list[i]);
		i++;
	}


	return 0;
}