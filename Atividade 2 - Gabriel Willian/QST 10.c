#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float alt, peso, psim, psif;
	char nom[20];
	char sex; 
	
	printf("Digite o seu nome: ");
	scanf(" %s", nom);
	printf("Digite o seu peso: ");
	scanf("%f", &peso);
	printf("Digite a sua altura: ");
	scanf("%f", &alt);
	printf("Digite o seu sexo [M/F]: ");
	scanf(" %c", &sex);
	
	
	if(sex == 'M' || sex == 'm' ){
		psim = (72.7*alt) - 58;
		printf("Olá %s, seu peso ideal com base na sua altura que é de %.2f é de %.2f!", nom, alt, psim);
	}
	else if(sex == 'F' || sex == 'f' ){
		psif = (62.1*alt) - 44.7;
		printf("Olá %s, seu peso ideal com base na sua altura que é de %.2f é de %.2f!", nom, alt, psif);
	}
	else{
		printf("Sexo inválido!");
	}
	
	return 0;
}
