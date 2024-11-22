#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int N, A[N], B[N], S[N], i;
	
	srand((unsigned)time(NULL));
	
	printf("Digite o tamanho dos vetores: ");
	scanf("%d", &N);
	
	for( i = 0; i < N; i++){
	A[N] = rand() % 99;
	B[N] = rand() % 99;
	S[N] = A[N] + B[N];
	printf("A soma de A + B na posição %dº é: %d\n", i, S[N]);	
	}
	
	
	return 0;
}
