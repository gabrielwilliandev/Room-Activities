#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	double val, novoval;

	printf("Digite o valor de f�brica do carro: ");
	scanf("%lf", &val);
	
	novoval = val+(val*0.28)+(val*0.45);
	
	printf("O valor ao consumidor ser� R$%.2lf!", novoval);
	
	
	return 0;
}
