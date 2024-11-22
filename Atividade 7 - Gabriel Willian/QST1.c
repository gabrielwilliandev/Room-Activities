#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int x = 20;
	char letra = {'G'};
	
	int *pX = &x;
	char *pL = &letra;
	
	printf("O valor de pX é: %d | A letra em pL é: %c\n\n", *pX, *pL);
	
	*pX = 19;
	*pL = 'W';
	
	printf("O valor de pX agora é: %d | A letra em pL agora é: %c", *pX, *pL);
	
	
	
	return 0;
}
