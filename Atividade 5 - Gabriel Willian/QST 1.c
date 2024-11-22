#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int notas[20];
	int i, soma=0, qtdalunos=0;
	float med;
	
	srand((unsigned)time(NULL));
	
	
	for( i = 0; i < 20; i++){
		notas[i] = rand() % 10;
		printf("A nota do aluno %d foi: %d\n", i, notas[i]);
		
		soma += notas[i];
	}
	med = soma/20.0;
	printf("A média dos alunos foi: %.2f!\n", med);
	
		for( i = 0; i < 20; i++){
			if((float)notas[i]>med){
				qtdalunos++;
			}
		}
	
	printf("A quantidade de alunos acima da média foi: %d", qtdalunos);
	
	
	
	
	
	return 0;
}
