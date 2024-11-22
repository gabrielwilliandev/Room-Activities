#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int val;
	
	printf("Digite um valor: ");
	scanf("%d", &val);
	
	if(val>=0){
		printf("É positivo!");
	}
	else{
		printf("É negativo!");
	}
	
	
	return 0;
}
