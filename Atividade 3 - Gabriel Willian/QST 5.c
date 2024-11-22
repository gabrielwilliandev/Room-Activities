#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float nota1, nota2;
	
	nota1 = -1;
	nota2 = -1;
	
	while(((nota1<0) || (nota1>10)) || ((nota2<0) || (nota2>10))){
	
	printf("Digite a sua primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite a sua segunda nota: ");
	scanf("%f", &nota2);
	
	
	}
	
	printf("O valor da média é: %.1f", (nota1+nota2)/2);

	
	
	return 0;
}
