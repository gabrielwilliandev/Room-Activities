#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float vet[10];
	
	float *p;
	int i;
	
	for( i = 0; i < 10; i++){
		p = &vet[i];
		printf("O endere�o da posi��o %d �: %p \n", i, p);
	}
	
	
	return 0;
}
