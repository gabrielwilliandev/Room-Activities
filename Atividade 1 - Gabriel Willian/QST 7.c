#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	double sal, carros, ventotal, comis, saltotal;
	
	printf("Digite o valor de carros que voc� vendeu: ");
	scanf("%lf", &carros);
	printf("Digite o valor total que voc� vendeu: ");
	scanf("%lf", &ventotal);
	printf("Digite o seu sal�rio fixo: ");
	scanf("%lf", &sal);
	printf("Digite o valor que recebe por comiss�o: ");
	scanf("%lf", &comis);


	saltotal = sal + (comis*carros) + (ventotal * 0.05);
	
	printf("O valor total do sal�rio ser� R$%.2lf!", saltotal);
	
	return 0;
}
