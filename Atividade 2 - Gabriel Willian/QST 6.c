#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n1, n2;
		
	printf("Digite um valor para n1: ");
	scanf("%d", &n1);
	printf("Digite um valor para n2: ");
	scanf("%d", &n2);
	
	if(n1>n2){
		printf("%d � o maior n�mero digitado.", n1);
		
	}	
	else{
		printf("%d � o maior n�mero digitado.", n2);
	}
	
	
	
	return 0;
}
