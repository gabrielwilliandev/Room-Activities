#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int comp;
	float soma;
	printf("Digite o valor de maçãs que deseja comprar: ");
	scanf("%d", &comp);
	
	if(comp>=12){
		soma = comp*1;
		printf("Sua compra custará R$%.2f!", soma);
	}
	else{
		soma = comp*1.30;
		printf("Sua compra custará R$%.2f!", soma);
	}
	
	
	return 0;
}
