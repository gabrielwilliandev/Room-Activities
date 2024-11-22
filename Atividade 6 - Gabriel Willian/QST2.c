#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char texto1[100], texto2[100];
    int i, tamanho1 = 0, tamanho2 = 0;

    printf("Digite um texto: ");
    fgets(texto1, 100, stdin);
    
    strcpy(texto2, texto1);
    
    for( i = 0; texto1[i] != '\0'; i++){
    	tamanho1++;
	}
	
	if (texto1[tamanho1 - 1] == '\n') {
        texto1[tamanho1 - 1] = '\0';
        tamanho1--;
    }

    tamanho2 = strlen(texto2);
    if (texto2[tamanho2 - 1] == '\n') {
        texto2[tamanho2 - 1] = '\0';
        tamanho2--;
    }

	printf("O tamanho de texto 1 é %d e de texto 2 é %d!\n", tamanho1, tamanho2);
	
	if(strcmp(texto1, texto2) == 0){
		printf("Textos iguais!");
	}
	else{
		printf("Textos diferentes.");
	}
    

    return 0;
}

