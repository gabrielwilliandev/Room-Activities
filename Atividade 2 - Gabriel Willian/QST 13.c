#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int qntdAtual, qntdMax, qntdMin;
	float qntdMed;
	
	printf("Digite a quantidade de produto atual: ");
	scanf("%d", &qntdAtual);
	printf("Digite a quantidade de produto máxima: ");
	scanf("%d", &qntdMax);
	printf("Digite a quantidade de produto minínma: ");
	scanf("%d", &qntdMin);
	
	qntdMed = (qntdMax + qntdMin)/2;
	
	if(qntdAtual > qntdMed){
		printf("Não realizar compra!");
	}
	else{
		printf("Realize a compra de mais produtos.");
	}
	
	
	
	

	
	
	return 0;
}	
