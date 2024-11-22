#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char texto1[100], texto2[100];
    int i, k = 0, tamanho1 = 0, tamanho2 = 0;

    printf("Digite um texto: ");
    fgets(texto1, 100, stdin);
    
	
    tamanho1 = strlen(texto1);
    
    if (texto1[tamanho1 - 1] == '\n') {
        texto1[tamanho1 - 1] = '\0';
        tamanho1--;
    }
    
    tamanho2 = tamanho1;
    
    
    for( i = tamanho1 - 1; i >= 0; i--){
    	texto2[k] = texto1[i];
    	k++;
	}
	texto2[k] = '\0';
	
	printf("%s\n%s\n", texto2, texto1);
	
	if(strcmp(texto1, texto2) == 0){
		printf("Textos iguais!");
	}
	else{
		printf("Textos diferentes.");
	}
	

    return 0;
}

