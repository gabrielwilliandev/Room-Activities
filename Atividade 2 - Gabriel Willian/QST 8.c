#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int inicio, fim;
		
	printf("Digite a hora de inicio: ");
	scanf("%d", &inicio);
	printf("Digite a hora de fim: ");
	scanf("%d", &fim);
	
	//hora 18.720
	
	if(inicio>=fim){
		printf("O jogo durou %d horas.", (24-inicio)+fim);
		
	}	
	else{
		printf("O jogo durou %d horas.", fim-inicio);
	}
	
	
	
	return 0;
}
