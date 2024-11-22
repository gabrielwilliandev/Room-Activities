#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int vetor[15], vetor2[15], i, igual = 0;
    srand((unsigned)time(NULL));

    for( i = 0; i < 15; i++){
    	vetor[i] = rand() % 10;
    	vetor2[i] = rand() % 10;
    	
    	printf("Vetor 1: %d \n", vetor[i]);
    	printf("Vetor 2: %d \n", vetor2[i]);
    	
    	if(vetor[i] == vetor2[i]){
    		igual++;
		}
	}
    
    printf("A quantidade de números onde V1 e V2 tem os mesmos números e nas mesma posições é: %d", igual);
    
    return 0;
}

