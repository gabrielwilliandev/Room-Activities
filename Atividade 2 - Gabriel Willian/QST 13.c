#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int qntdAtual, qntdMax, qntdMin;
	float qntdMed;
	
	printf("Digite a quantidade de produto atual: ");
	scanf("%d", &qntdAtual);
	printf("Digite a quantidade de produto m�xima: ");
	scanf("%d", &qntdMax);
	printf("Digite a quantidade de produto min�nma: ");
	scanf("%d", &qntdMin);
	
	qntdMed = (qntdMax + qntdMin)/2;
	
	if(qntdAtual > qntdMed){
		printf("N�o realizar compra!");
	}
	else{
		printf("Realize a compra de mais produtos.");
	}
	
	
	
	

	
	
	return 0;
}	
