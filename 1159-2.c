/* soma dos 5 pares consecutivos a partir de x, incluindo o x, se este for par */
#include <stdio.h>
int main(void){
	long long int x, s;
	int i;
	while(1){
		s = 0;
		scanf("%lld",&x);
		if(x == 0) break;
		if (x%2 != 0){
			++x;
		}
		for(i = 0;i < 5; i++){
			i == 4 ? printf("%lld = ",x) : printf("%lld + ",x);
			s += x;
			x+=2;
		}
		printf("%lld\n",s);
	}
	return 0;
}