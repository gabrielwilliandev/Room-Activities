#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int merc, i, soma;
	float med, val;
	
	val = 0;
	soma = 0;
	
	printf("Quantas mercadorias tem? ");
	scanf("%d", &merc);
	for(i=1;i<=merc;i++){
		
		printf("Digite o valor da mercadoria de número %d: ", i);
		scanf("%f", &val);
		
		soma = soma+val;
	}
	med = soma/merc;
	printf("A média do valor das mercadorias é: R$%.2f e o valor total é: R$%d", med, soma);
	
	
	
	return 0;
}
