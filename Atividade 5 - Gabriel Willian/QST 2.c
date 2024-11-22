#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, Q[20], maior = 0, k = 0, p = 0;
	
	srand((unsigned)time(NULL));
	
	for( i = 0; i < 20; i++){
	
	Q[i] = rand();
	printf("%dº valor: %d\n", i, Q[i]);
	k = Q[i];
	
	if(maior < k){
		maior = k;
		p = i;
		}	
	}
	
	printf("O maior valor digitado foi %d na posição %d!", maior, p);	
	
	
	
	return 0;
}
