#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
