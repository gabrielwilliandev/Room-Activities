#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float nota1, nota2;
	char resp = 'S';
	
	nota1 = -1;
	nota2 = -1;
	
	while(resp == 'S'){
	
		while(((nota1<0) || (nota1>10)) || ((nota2<0) || (nota2>10))){
	
		printf("Digite a sua primeira nota: ");
		scanf("%f", &nota1);
		printf("Digite a sua segunda nota: ");
		scanf("%f", &nota2);
	
		}
		
		printf("O valor da média é: %.1f\n", (nota1+nota2)/2);
		printf("Deseja realizar um novo cálculo? [S/N] \n");
		scanf("%s", &resp);
		resp = toupper(resp); 
		nota1 = -1;
		nota2 = -1;
	}
	

	printf("Programa finalizado!");
	
	return 0;
}
