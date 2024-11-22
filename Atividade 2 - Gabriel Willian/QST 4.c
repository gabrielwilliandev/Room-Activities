#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float n1, n2;
	
	printf("Digite sua nota 1: ");
	scanf("%f", &n1);
	printf("Digite sua nota 2: ");
	scanf("%f", &n2);
	
	if((n1+n2)/2>=7){
		printf("Aluno aprovado!");
	}
	else{
		printf("Aluno reprovado!");
	}
	
	
	return 0;
}
