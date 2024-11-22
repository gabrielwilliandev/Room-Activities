#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int horas, sal, acre;
	
	printf("Digite quantas horas você trabalhou por mês: ");
	scanf("%d", &horas);
	printf("Digite o valor que você recebe por hora: ");
	scanf("%d", &sal);
	
	if(horas>40){
		acre = (sal*horas);
		acre = acre+(acre*0.50);
		printf("O salário total é R$%d!", acre);
		
	}
	else{
		acre = (sal*horas);
		printf("O salário total é R$%d!", acre);
	}
	
	
	
	
	return 0;
}
