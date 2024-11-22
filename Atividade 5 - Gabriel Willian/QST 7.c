#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int temp[365], med, i, maior = 0, menor = 100000, tep, qntd = 0;
	
	srand((unsigned)time(NULL));
	
	
	for( i = 0; i < 365; i++){
	
		temp[i] = rand() % 50;	
		med += temp[i];
		tep = temp[i];
		if( tep < menor){
			menor = tep;
			printf("Menor tempratura: %d\n", menor);
		}
		else if( tep > maior ){
			maior = tep;
			printf("Maior tempratura: %d\n", maior);
		}
	}
	med = med/365;
	
	for( i = 0; i < 365; i++){
		tep = temp[i];
		if(tep < med){
			qntd++;
		}
	}
	
	printf("A menor temperatura do ano foi: %d\n", menor);
	printf("A maior temperatura do ano foi: %d\n", maior);
	printf("A média de temperatura do ano foi: %d\n", med);
	printf("A quantidade de dias que teve temperatura menor que a média anual foi: %d\n", qntd);
	return 0;
}
