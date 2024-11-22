#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n, i;
	
	printf("Digite um valor para N: ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		printf("%d\n",i);
	}
	
	
	return 0;
}
