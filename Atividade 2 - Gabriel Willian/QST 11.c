#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float salario, vendas, comissao1, comissao2;
	
	
	printf("Digite o valor do sal�rio que voc� recebe: ");
	scanf("%f", &salario);
	printf("Digite quanto voc� vendeu: ");
	scanf("%f", &vendas);
	
	if(vendas <=1500){
		salario += vendas*0.03;
		printf("O seu sal�rio total �: R$%.2f!", salario);
	}
	else{
		salario += vendas*0.05;
		printf("O seu sal�rio total �: R$%.2f!", salario);
	}
	
	
	
	return 0;
}
