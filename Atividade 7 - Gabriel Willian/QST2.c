#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int x = 2, y = 5;
	
	int *pX, *pY;
	
	pX = &x;
	pY = &y;
	
	printf("O valor de pX é: %d\n", pX);
	printf("O valor de pY é: %d\n", pY);
	
	if(pX > pY) 
		printf("O maior endereço é pX, e o valor é: %d", pX);
	else 
		printf("O maior endereço é pY, e o valor é: %d", pY);
	
	return 0;
}
