#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char texto[100];
    int i, tamanho = 0;

    printf("Digite um texto: ");
    fgets(texto, 100, stdin);
    

    tamanho = strlen(texto);
    if (texto[tamanho - 1] == '\n') {
        texto[tamanho - 1] = '\0';
        tamanho--;
    }
    
    for( i = tamanho; i >= 0; i--){
    	printf("%c", texto[i]);
	}

	

    return 0;
}

