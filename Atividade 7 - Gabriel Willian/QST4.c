#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float vet[10];
	
	float *p;
	int i;
	
	for( i = 0; i < 10; i++){
		p = &vet[i];
		printf("O endereço da posição %d é: %p \n", i, p);
	}
	
	
	return 0;
}
