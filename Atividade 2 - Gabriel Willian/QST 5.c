#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int ano;
	
	printf("Qual ano voc� nasceu? ");
	scanf("%d", &ano);
	
	if(2024-ano>=16){
		printf("Voc� j� pode votar!");
	}
	else{
		printf("Voc� ainda n�o pode votar!");
	}
	
	
	
	
	return 0;
}
