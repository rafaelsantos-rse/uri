#include <stdio.h>

int main(void){

	float n1, n2, n3, n4, media;
	scanf("%f %f %f %f",&n1, &n2, &n3, &n4);
	media = (n1*2 + n2*3 + n3*4 + n4*1) / 10;
	printf("Media: %.1f\n",media);
	if (media >= 7.0){
		printf("Aluno Aprovado\n");
	}
	else if(media >= 5.0 && media <= 6.9){
		printf("Aluno em exame\n");
		float n;
		scanf("%f",&n);
		printf("Nota do exame: %.1f\n",n);
		if (n >= 5.0){
			printf("Aluno Aprovado\n");
		} else{
				printf("Aluno Reprovado\n");
		}
		printf("Media final: %.1f",(media+n)/2);
	} else{
		printf("Aluno Reprovado\n");
	}
	return 0;
}