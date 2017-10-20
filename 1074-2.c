#include <stdio.h>
#include <string.h>

int main(void){
	char sinal[20];
	char oddeven[20];
	int n, t;
	void OddEven(int n, char str[]);
	void PosNegNull(int n, char str[]);

	scanf("%d",&t);
	while (t > 0){
		scanf("%d", &n);
		OddEven(n, oddeven);
		PosNegNull(n, sinal);
		printf("%s%s\n", oddeven, sinal);
		t--;
	}
		
	return 0;
}

void OddEven(int n, char str[]){
	if (n % 2  != 0){
		strcpy(str,"ODD ");
	} else{
		if (n == 0){
			strcpy(str, "");
		} else{
			strcpy(str,"EVEN ");
		} 
		
	}
}
void PosNegNull(int n, char str[]){
	if (n > 0){
		strcpy(str, "POSITIVE");
	} else {
		if ( n < 0){
			strcpy(str,"NEGATIVE");
		} else{
			strcpy(str,"NULL");
		}
		
	}
}