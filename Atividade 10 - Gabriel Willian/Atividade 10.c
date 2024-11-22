#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	long vet[1000], maior = LONG_MIN;
	int i, t, qntd = 0;
	
	FILE *arq;
	
	
	arq = fopen("numeros.dat", "rb");
	
	if(arq != NULL){
		printf("\nArquivo aberto com sucesso!");
	}
	else{
		printf("\nErro ao abrir arquivo!");
		system("pause");
		exit(1);
	}
	
	fseek (arq, 0, SEEK_END);
	t = ftell (arq);
	fseek(arq, 0, SEEK_SET);
	
	
	qntd = t / sizeof(long);
	fread(vet, sizeof(long), qntd, arq);
	
	printf("\n--- No vetor --- \n");
	
	for( i = 0; i < qntd; i++){
		if(maior < vet[i]){
			maior = vet[i];
		}
	}
	
	printf("O maior é: %ld\n", maior);
	printf("A quantidade de números no vetor é: %d", qntd);
	
	fclose(arq);
	
	
	return 0;
}
