#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int val;
	
	printf("Digite um valor: ");
	scanf("%d", &val);
	
	if(val>10){
		printf("� maior que 10!");
	}
	else{
		printf("N�o � maior que 10!");
	}
	
	
	return 0;
}
