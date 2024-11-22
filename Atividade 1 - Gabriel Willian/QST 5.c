#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	double sal, perc, novosal;
	
	printf("Escreva o valor do seu salário: ");
	scanf("%lf", &sal);
	printf("Escreva o percentual de aumento: ");
	scanf("%lf", &perc);
	
	novosal = sal+(sal*(perc/100));
	
	printf("Seu novo salário será: R$%.2lf!", novosal);
	
	return 0;
}
