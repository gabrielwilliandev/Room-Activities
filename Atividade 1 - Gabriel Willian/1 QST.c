#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int a;
	
	printf("Digite um valor: ");
	scanf("%d", &a);
	
	printf("O valor digitado foi: %d e seu antecessor �: %d", a, a-1);
	
	
	
	return 0;
}
