#include <stdio.h>
int main(void){
	int a, b, c, L[3];
	scanf("%d %d %d",&a, &b, &c);
	if(a > b && b > c){
		L[0] = c;
		L[1] = b;
		L[2] = a;
	}
	else if(a >c && c > b){
		L[0] = b;
		L[1] = c;
		L[2] = a;
	}
	else if(b > c && c > a){
		L[0] = a;
		L[1] = c;
		L[2] = b;
	}
	else if(b > a && a > c){
		L[0] = c;
		L[1] = a;
		L[2] = b;
	}
	else if(c > a && a > b){
		L[0] = b;
		L[1] = a;
		L[2] = c;
	}
	else if(c > b && b > a){
		L[0] = a;
		L[1] = b;
		L[2] = c;
	}
	else{
		if (a == b ){
			if (c > a){
				L[0] = a;
				L[1] = b;
				L[2] = c;
			}
			else if (c < a){
				L[0] = c;
				L[1] = b;
				L[2] = a;
			}
		}
		else if (b == c){
			if(a > c){
				L[0] = c;
				L[1] = b;
				L[2] = a;
			}
			else if (a < c){
				L[0] = a;
				L[1] = b;
				L[2] = c;
			}
		}
		else if (c == a){
			if (b > c){
				L[0] = a;
				L[1] = c;
				L[2] = b;
			}
			else if (b < c){
				L[0] = b;
				L[1] = a;
				L[2] = c;
			}
		}
		else if(a == b && b == c){
			L[0] = b;
			L[1] = a;
			L[2] = c;
		}
	}
	int j = 0;
	while (j < 3){
		printf("%d\n",L[j]);
		j++;
	}
	printf("\n");
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	return 0;
}
