#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float conta, saldo, debito, credito, saldoAtual;
	
	printf("Digite o número da sua conta: ");
	scanf("%f", &conta);
	printf("Digite o seu saldo: ");
	scanf("%f", &saldo);
	printf("Digite o seu debito: ");
	scanf("%f", &debito);
	printf("Digite o seu crédito: ");
	scanf("%f", &credito);
	
	saldoAtual = saldo - debito + credito;
	
	if(saldoAtual>=0){
		printf("Saldo positivo!");
	}
	else{
		printf("Saldo negativo!");
	}
	
	

	
	
	return 0;
}	
