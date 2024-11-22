#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n, i, j;
	
	printf("Digite um valor: ");
	scanf("%d", &n);
	
	for(i=n; i>=0; i--){
		for(j=n; j>=i; j--){
		
		printf("*");
		}
		printf("\n");
	}

	
	return 0;
}
