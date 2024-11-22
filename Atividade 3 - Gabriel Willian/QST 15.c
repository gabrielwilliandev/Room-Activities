#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int i, soma;
	float med;
	soma = 0;
	
	for(i=15;i<=100;i++){
		soma = soma+i;
	}
	
	med = soma/85;
	
	printf("A média é: %.2f", med);
	
	return 0;
}
