#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, Q[20], menor = 100000, k = 0, p = 0;
	
	srand((unsigned)time(NULL));
	
	for( i = 0; i < 20; i++){
	
	Q[i] = rand();
	printf("%dº valor: %d\n", i, Q[i]);
	k = Q[i];
	
	if(k < menor){
		menor = k;
		p = i;
		}	
	}
	
	printf("O menor valor digitado foi %d na posição %d!", menor, p);	
	
	
	
	return 0;
}
