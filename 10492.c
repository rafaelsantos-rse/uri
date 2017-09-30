#include <stdio.h>
#include <string.h>
int main(void){
	void animal(char *word);
	char word[256];
	scanf("%s", word);
	animal(word);
	return 0;
}

void animal(char *word){
	void isequal(char *word, char *word2);
	if (isequal(word, "vertebrado")){
		scanf("%s", word);
		if (isequal(word,"ave")){
			scanf("%s", word);
			if (isequal(word,"carnivoro")){
				printf("aguia\n");
			}
			else if(isequal(word,"onivoro")){
				printf("pomba\n");
			}
		}
		else if(isequal(word,"mamifero")){
			scanf("%s", word);
			if(isequal(word,"onivoro")){
				printf("homem\n");
			}
			else if(isequal(word,"herbivoro")){
				printf("vaca\n");
			}
		}
	}
	else if(isequal(word,"invertebrado")){
		scanf("%s", word);
		if (isequal(word,"inseto")){
			scanf("%s", word);
			if (isequal(word,"hematofago")){
				printf("pulga\n");
			}
			else if(isequal(word,"herbivoro")){
				printf("lagarta\n");
			}
		}
		else if(isequal(word,"anelideo")){
			scanf("%s", word);
			if (isequal(word,"hematofago")){
				printf("sanguessuga\n");
			}
			else if(isequal(word, "onivoro")){
				printf("minhoca\n");
			}
		}
	}
}

int isequal(char *word, char *word2){
	int i = strlen(word);
	int j = strlen(word2);
	if (i != j){
		return 0;
	} else{
		for (i = 0; i < j; i++){
			if(word[i] != word2[i]){
				return 0;
			}
		}
		return 1;
	}
}
