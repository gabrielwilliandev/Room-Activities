#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float graus, faren;
	
	printf("Digite a temperatura em Fahrenheit: ");
	scanf("%f", &faren);
	
	graus = ((faren-32)/9)*5;
	
	printf("Isso equivale a temperatura de %.0f graus celsius.", graus);
	
	return 0;
}
