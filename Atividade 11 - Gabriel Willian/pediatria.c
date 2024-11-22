#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "pediatria.h"


paciente_t * primeiro_paciente(char *nome, int idade, float peso, float altura, char genero){
	setlocale(LC_ALL, "Portuguese");
	paciente_t *crianca;
	crianca = malloc(sizeof(paciente_t));
	
	if(crianca == NULL){
		printf("Erro ao alocar memória!\n");
		exit(1);
	}
	
	printf("Digite o nome da criança: ");
	fgets(crianca->nome, sizeof(crianca->nome), stdin);
	crianca->nome[sizeof(crianca->nome) - 1] = '\0';
	printf("Digite a idade: ");
	scanf("%d", &crianca->idade);
	fflush(stdin);
	printf("Digite o peso: ");
	scanf("%f", &crianca->peso);
	fflush(stdin);
	printf("Digite a altura: ");
	scanf("%f", &crianca->altura);
	fflush(stdin);
	printf("Digite o gênero [M/F]: ");
	scanf(" %c", &crianca->genero);
	fflush(stdin);
	
	crianca->prox = NULL;
	
	return crianca;
	
	
}


void novo_paciente(paciente_t *primeiro, char *nome, int idade, float peso, float altura, char genero){
	paciente_t *aux = primeiro;
	
	while(aux->prox != NULL){
		aux = aux->prox;
	}
	
	paciente_t *crianca;
	
	crianca = malloc(sizeof(paciente_t));
	
	if(crianca == NULL){
		printf("Erro ao alocar memória!\n");
		exit(1);
	}
	
	printf("Digite o nome da criança: ");
	fgets(crianca->nome, sizeof(crianca->nome), stdin);
	crianca->nome[sizeof(crianca->nome) - 1] = '\0';
	printf("Digite a idade: ");
	scanf("%d", &crianca->idade);
	fflush(stdin);
	printf("Digite o peso: ");
	scanf("%f", &crianca->peso);
	fflush(stdin);
	printf("Digite a altura: ");
	scanf("%f", &crianca->altura);
	fflush(stdin);
	printf("Digite o gênero: [M/F]");
	scanf(" %c", &crianca->genero);
	fflush(stdin);
	
	crianca->prox = NULL;
	aux->prox = crianca;
	
	
}


IMCInfantil calcula_imc(paciente_t *crianca){
	if(crianca->altura <= 0){
		printf("Altura inválida!\n");
		return ABAIXO;
	}
	if(crianca->idade < 6 || crianca->idade > 15){
		printf("Idade inválida!\n");
		return ABAIXO;
	}
	if(crianca->peso < 0){
		printf("Peso inválido!\n");
		return ABAIXO;
	}
	float imc = crianca->peso/(crianca->altura*crianca->altura);
	
	if(crianca->genero == 'm' || crianca->genero == 'M'){
		
		switch(crianca->idade){
			case 6:
				if( imc < 14.5 ) return ABAIXO;
				if( imc < 16.6 ) return NORMAL;
				if( imc < 18.0 ) return SOBREPESO;
				return OBESIDADE;
				break;
			case 7:
				if( imc < 15.0 ) return ABAIXO;
				if( imc < 17.3 ) return NORMAL;
				if( imc < 19.1 ) return SOBREPESO;
				return OBESIDADE;
				break;
			case 8:
				if( imc < 15.6 ) return ABAIXO;
				if( imc < 16.7 ) return NORMAL;
				if( imc < 20.3 ) return SOBREPESO;
				return OBESIDADE;
				break;
			case 9:
				if( imc < 16.1 ) return ABAIXO;
				if( imc < 18.8 ) return NORMAL;
				if( imc < 21.4 ) return SOBREPESO;
				return OBESIDADE;
				break;
			case 10:
				if( imc < 16.7 ) return ABAIXO;
				if( imc < 19.6 ) return NORMAL;
				if( imc < 22.5 ) return SOBREPESO;
				return OBESIDADE;
				break;
			case 11:
				if( imc < 17.2 ) return ABAIXO;
				if( imc < 20.3 ) return NORMAL;
				if( imc < 23.7 ) return SOBREPESO;
				return OBESIDADE;
				break;
			case 12:
				if( imc < 17.8 ) return ABAIXO;
				if( imc < 21.1 ) return NORMAL;
				if( imc < 24.8 ) return SOBREPESO;
				return OBESIDADE;
				break;
			case 13:
				if( imc < 18.5 ) return ABAIXO;
				if( imc < 21.9 ) return NORMAL;
				if( imc < 25.9 ) return SOBREPESO;
				return OBESIDADE;
				break;
			case 14:
				if( imc < 19.2 ) return ABAIXO;
				if( imc < 22.7 ) return NORMAL;
				if( imc < 26.9 ) return SOBREPESO;
				return OBESIDADE;
				break;
			case 15:
				if( imc < 19.9 ) return ABAIXO;
				if( imc < 23.6 ) return NORMAL;
				if( imc < 27.7 ) return SOBREPESO;
				return OBESIDADE;
				break;
			}
		
		}
	if(crianca->genero == 'f' || crianca->genero == 'F'){
		
		switch(crianca->idade){
			case 6:
				if( imc < 14.3 ) return ABAIXO;
				if( imc < 16.1 ) return NORMAL;
				if( imc < 17.4 ) return SOBREPESO;
				return OBESIDADE;
				break;
			case 7:
				if( imc < 14.9 ) return ABAIXO;
				if( imc < 17.1 ) return NORMAL;
				if( imc < 18.9 ) return SOBREPESO;
				return OBESIDADE;
				break;
			case 8:
				if( imc < 15.6 ) return ABAIXO;
				if( imc < 18.1 ) return NORMAL;
				if( imc < 20.3 ) return SOBREPESO;
				return OBESIDADE;
				break;
			case 9:
				if( imc < 16.3 ) return ABAIXO;
				if( imc < 19.1 ) return NORMAL;
				if( imc < 21.7 ) return SOBREPESO;
				return OBESIDADE;
				break;
			case 10:
				if( imc < 17.0 ) return ABAIXO;
				if( imc < 20.1 ) return NORMAL;
				if( imc < 23.2 ) return SOBREPESO;
				return OBESIDADE;
				break;
			case 11:
				if( imc < 17.6 ) return ABAIXO;
				if( imc < 21.1 ) return NORMAL;
				if( imc < 24.5 ) return SOBREPESO;
				return OBESIDADE;
				break;
			case 12:
				if( imc < 18.3 ) return ABAIXO;
				if( imc < 22.1 ) return NORMAL;
				if( imc < 25.9 ) return SOBREPESO;
				return OBESIDADE;
				break;
			case 13:
				if( imc < 18.9 ) return ABAIXO;
				if( imc < 23.0 ) return NORMAL;
				if( imc < 27.7 ) return SOBREPESO;
				return OBESIDADE;
				break;
			case 14:
				if( imc < 19.3 ) return ABAIXO;
				if( imc < 23.8 ) return NORMAL;
				if( imc < 27.9 ) return SOBREPESO;
				return OBESIDADE;
				break;
			case 15:
				if( imc < 19.6 ) return ABAIXO;
				if( imc < 24.2 ) return NORMAL;
				if( imc < 28.8 ) return SOBREPESO;
				return OBESIDADE;
				break;
			}
		
		}
	}



