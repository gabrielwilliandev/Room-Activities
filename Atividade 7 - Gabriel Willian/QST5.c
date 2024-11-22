#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float vet[3][3];
	srand((unsigned)time(NULL)); 
	
	float *p;
	int i, j, k, l;
	
	for( i = 0; i < 3; i++){
		for( j = 0; j < 3; j++){
			p = &vet[i][j];
			printf(" O endereço da posição (%d, %d) é: %p\n", i, j, p);
		}
	}
	
	
	return 0;
}
