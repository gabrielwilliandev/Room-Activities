#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float n1, n2;
	
		do{
		printf("Digite o valor de n1: ");
		scanf("%d", &n1);	
		printf("Digite o valor de n2 que seja diferente de 0: ");
		scanf("%d", &n2);
		}while(n2==0);
	
	printf("A divisão de n1 por n2 é igual a: %.2f", n1/n2);
	
	return 0;
}
