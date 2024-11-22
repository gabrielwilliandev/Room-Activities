#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int base, altura, area;
	
	printf("Digite o valor da base: ");
	scanf("%d", &base);
	printf("Digite a altura: ");
	scanf("%d", &altura);
	
	printf("O valor da área é: %d", base*altura);
	
	
	
	
	
	return 0;
}
