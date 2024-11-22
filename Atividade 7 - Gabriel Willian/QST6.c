#include <stdio.h>
#include <locale.h>


int func(char *text1, char *text2, int tamanho, int tamanho2){
	int i, j;
	
	for( i = 0; i <= tamanho - tamanho2; i++){
		for( j = 0; j < tamanho2; j++){
		
		if(text1[i + j] != text2[j]){
				break;
			}
		}
		if(j == tamanho2){
			return 1;
				}
			}
			return 0;
		}


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char texto1[100];
	char texto2[100];
	int tamanho = 0, tamanho2 = 0, i = 0, contem = 0;
	
	char *pTex1;
	char *pTex2;
	
	printf("Digite o primeiro texto: ");
	fgets(texto1, 99, stdin);
	printf("Digite o segundo texto: ");
	fgets(texto2, 99, stdin);
	
	while(texto1[i] != '\0'){
		if(texto1[i] == '\n'){
			texto1[i] = '\0';
			
		}
	i++;
	}
	
	i = 0;
	while(texto2[i] != '\0'){
		if(texto2[i] == '\n'){
			texto2[i] = '\0';
			
		}
	i++;
	}
	
	i = 0;
	while(texto1[i] != '\0'){
		tamanho++;
		i++;
	}
	
	i = 0;
	while(texto2[i] != '\0'){
		tamanho2++;
		i++;
	}
	
	pTex1 = texto1;
	pTex2 = texto2;
	
	printf("O tamanho é: %d\n", tamanho);
	
	contem = func(texto1, texto2, tamanho, tamanho2);
	
	if(contem == 1){
		printf("O texto 2 está contido no texto 1.");
	} else {
		printf("O texto 2 não está contido no texto 1.");
	}
	
	
	
	return 0;
}
