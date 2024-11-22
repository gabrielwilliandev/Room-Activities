#include <stdio.h>
#include <locale.h>


void fracao(float numero, int *inteiro, float *frac){
	
	*inteiro = (int)numero;
	*frac = numero - *inteiro;
	
}



int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float num, frac;
	int inteiro;
	
	float *pFrac;
	int *pInt;
	
	pInt = &inteiro;
	pFrac = &frac;
	
	printf("Digite um n�mero decimal: "); // Utilize virgula. Ex: 2,567
	scanf("%f", &num);
	
	
	
	fracao(num, pInt, pFrac);
	
	printf("O n�mero %.3f tem como parte inteira �: %d e a parte fracionada �: %.3f!", num, *pInt, *pFrac);
	
	
	return 0;
}
