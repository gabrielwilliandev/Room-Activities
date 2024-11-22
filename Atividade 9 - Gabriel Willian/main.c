#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include "paciente.h"


int leitos[50] = {0};

int GerarLeito(){
	srand((unsigned)time(NULL));
	while(1){
	
		int andar[] = {100, 200, 300, 400, 500};
		int andarleito = andar[rand() % 5];
		int leito = andarleito + ((rand() % 11) + 1);
		
		int indice = leito - andarleito;
	
		if(leitos[indice] == 0){
			leitos[indice] = 1;
			return leito;
		}
	}
}

void alocacao_paciente(paciente_t *paciente, char *nome, short idade){
	
	snprintf(paciente->nome, sizeof(paciente->nome), "%s", nome);
	paciente->idade = idade;
	paciente->leito = GerarLeito();
	
	
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	FILE *arq;
	int num, i;
	
	paciente_t pac[50];
	
	arq = fopen("Paciente.txt", "w");
	
	printf("Quantos pacientes deseja cadastrar: ");
	scanf("%d", &num);
	getchar();
	
	if(arq == NULL){
		printf("Erro na escrita");
		return 1;
	}
	
	fprintf(arq, "===== Dados dos Pacientes =====\n");
	for(i = 1; i < num+1; i++ ){
		printf("\n====Digite os dados do %dº paciente======\n\n", i);
		printf("Nome do %dº paciente: ", i);
		fgets(pac[i].nome, sizeof(pac[i].nome), stdin);
		printf("Idade do %dº paciente: ", i);
		scanf("%d", &pac[i].idade);
		getchar();
		alocacao_paciente(&pac[i], pac[i].nome, pac[i].idade);
		fprintf(arq, "Id do paciente: %d\nNome do Paciente: %sIdade: %d\nLeito: %d\n", i, pac[i].nome, pac[i].idade, pac[i].leito);
	}
	
	fclose(arq);
	
	
	return 0;
}
