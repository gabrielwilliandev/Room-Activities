#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int vetor[30], i, num, contador = 0;
    srand((unsigned)time(NULL));

    for( i = 0; i < 30; i++){
    	vetor[i] = rand() % 100;
    	printf("%d ", vetor[i]);
	}
	
	printf("\n\nDigite um n�mero para verificar se tem no vetor: ");
	scanf("%d", &num);
	
	for( i = 0; i < 30; i++){
		if(vetor[i] == num){
			contador++;
		}
	}
    
    printf("A quantidade de vezes que %d aparece �: %d", num, contador);
    
    return 0;
}

