#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int ano;
	
	printf("Qual ano você nasceu? ");
	scanf("%d", &ano);
	
	if(2024-ano>=16){
		printf("Você já pode votar!");
	}
	else{
		printf("Você ainda não pode votar!");
	}
	
	
	
	
	return 0;
}
