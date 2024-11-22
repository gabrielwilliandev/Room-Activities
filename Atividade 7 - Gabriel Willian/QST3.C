#include <stdio.h>
#include <locale.h>

void func(int *a, int *b){
	int aux;
	
	aux = *a;
	*a = *b;
	*b = aux;
	
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int x = 2, y = 5;
	
	int *pX, *pY;
	
	pX = &x;
	pY = &y;
	
	printf("O valor de pX é: %d\n", *pX);
	printf("O valor de pY é: %d\n", *pY);
	
	func(pX, pY);
	
	printf("O valor de pX agora é: %d\n", *pX);
	printf("O valor de pY agora é: %d\n", *pY);
	
	
	return 0;
}
