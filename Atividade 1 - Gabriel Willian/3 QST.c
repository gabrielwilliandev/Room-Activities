#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int ano, meses, dias;
	
	printf("Escreva a seguir sua idade expressa em anos: ");
	scanf("%d", &ano);
	printf("Escreva a seguir sua idade expressa em meses: ");
	scanf("%d", &meses);
	printf("Escreva a seguir sua idade expressa em dias: ");
	scanf("%d", &dias);
	
	ano = ano*365;
	meses = meses*30;
	
	printf("Você tem %d dias de vida!", ano+meses+dias);
	
	
	return 0;
}
