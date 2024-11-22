#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int soma, merc;
	float med, val;
	char conf = 'S';
	
	val = 0;
	soma = 0;
	merc = 0;
	
	for(conf = 'S'; conf == 'S';){
		
		printf("Digite o valor da mercadoria: ");
		scanf("%f", &val);
		
		soma = soma+val;
		merc = merc+1;
		
		printf("Deseja registrar mais uma mercadoria? [S/N] ");
		scanf("%s", &conf);
		conf = toupper(conf);
	}
	med = soma/merc;
	printf("A média do valor das mercadorias é: R$%.2f e o valor total é: R$%d", med, soma);
	
	
	
	return 0;
}
