#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int x = 20;
	char letra = {'G'};
	
	int *pX = &x;
	char *pL = &letra;
	
	printf("O valor de pX �: %d | A letra em pL �: %c\n\n", *pX, *pL);
	
	*pX = 19;
	*pL = 'W';
	
	printf("O valor de pX agora �: %d | A letra em pL agora �: %c", *pX, *pL);
	
	
	
	return 0;
}
