#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int A[10], X, M[10], i;
	
	srand((unsigned)time(NULL));
	
	for( i = 0; i < 10; i++){
		A[i] = rand() % 99;
		printf("%dº valor de A: %d\n", i, A[i]);
	}
	printf("Digite o valor de X para multiplicar os valores de A: ");
	scanf("%d", &X);
	
	for( i = 0; i < 10; i++){
		M[i] = A[i] * X;
		printf("O resultado da multiplicação é: %d\n", M[i]);
	}
	
	
	
	
	return 0;
}
