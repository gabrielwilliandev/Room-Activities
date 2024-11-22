#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main(){
	int a = 10, b = -8, troca;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Os valores de a e b são: %d e %d\n", a, b);
	
	troca = a;
	a = b;
	b = troca;
	
	printf("Agora, os valores de a e b são: %d e %d\n", a, b);
	
	
	
	
	return 0;
}
