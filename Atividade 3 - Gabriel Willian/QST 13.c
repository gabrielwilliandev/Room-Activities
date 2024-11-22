#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n=0, i, mult;
	
	
	for(; n<=1 || n>=10;){
		printf("Digite um valor para saber a tábuada: ");
		scanf("%d", &n);
	
			
		}
		for(i=1;i<=10;i++){
			mult = n*i;
			printf("%d x %d = %d\n", n, i, mult);
}
	
	return 0;
}
