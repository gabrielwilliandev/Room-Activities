#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int x = 2, y = 5;
	
	int *pX, *pY;
	
	pX = &x;
	pY = &y;
	
	printf("O valor de pX �: %d\n", pX);
	printf("O valor de pY �: %d\n", pY);
	
	if(pX > pY) 
		printf("O maior endere�o � pX, e o valor �: %d", pX);
	else 
		printf("O maior endere�o � pY, e o valor �: %d", pY);
	
	return 0;
}
