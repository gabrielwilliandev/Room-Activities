#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int val;
	
	printf("Digite um valor: ");
	scanf("%d", &val);
	
	if(val>=0){
		printf("� positivo!");
	}
	else{
		printf("� negativo!");
	}
	
	
	return 0;
}
