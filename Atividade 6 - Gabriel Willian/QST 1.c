#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char senha[100];
    int i, tamanho, contemnum = 0, maiusculas = 0, minusculas = 0;

    printf("Digite a sua senha: ");
    fgets(senha, 100, stdin);

    tamanho = strlen(senha);
    if (senha[tamanho - 1] == '\n') {
        senha[tamanho - 1] = '\0';
        tamanho--;
    }

    if (tamanho < 8) {
        printf("Tamanho insuficiente!");
    } else if (tamanho > 99) {
        printf("Senha grande demais.");
    } else {
        for (i = 0; i < tamanho; i++) {
            
            if (senha[i] >= '0' && senha[i] <= '9') {
                contemnum = 1;
                break;
            }
            
        }
        if (contemnum == 0) {
            printf("A senha precisa conter números!\n");
        }

		for ( i = 0; i < tamanho; i++){
	        if (senha[i] >= 'A' && senha[i] <= 'Z') {
	            maiusculas = 1;
	        }
		}
		
        if (maiusculas == 0) {
            printf("A senha precisa conter letras maiúsculas!\n");
        }
        
		for ( i = 0; i < tamanho; i++){
	        if (senha[i] >= 'a' && senha[i] <= 'z') {
	            minusculas = 1;
	        }
    	}

        if (minusculas == 0) {
            printf("A senha precisa conter letras minúscula!\n");
        }
    }
    if(contemnum == 1 && maiusculas == 1 && minusculas == 1){
    	printf("Senha válida!\n");
	}

    return 0;
}

