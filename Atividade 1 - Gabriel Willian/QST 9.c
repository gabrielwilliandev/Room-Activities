#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float n1, n2, n3, mp;
	
	printf("Digite sua primeira nota: ");
	scanf("%f", &n1);
	printf("Digite sua segunda nota: ");
	scanf("%f", &n2);
	printf("Digite sua terceira nota: ");
	scanf("%f", &n3);
	
	mp = ((2*n1)+(3*n2)+(5*n3))/10;
	
	printf("Sua média final é %.1f pontos!", mp);
	
	
	return 0;
}
