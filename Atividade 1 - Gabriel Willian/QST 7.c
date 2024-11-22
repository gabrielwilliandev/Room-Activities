#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	double sal, carros, ventotal, comis, saltotal;
	
	printf("Digite o valor de carros que você vendeu: ");
	scanf("%lf", &carros);
	printf("Digite o valor total que você vendeu: ");
	scanf("%lf", &ventotal);
	printf("Digite o seu salário fixo: ");
	scanf("%lf", &sal);
	printf("Digite o valor que recebe por comissão: ");
	scanf("%lf", &comis);


	saltotal = sal + (comis*carros) + (ventotal * 0.05);
	
	printf("O valor total do salário será R$%.2lf!", saltotal);
	
	return 0;
}
