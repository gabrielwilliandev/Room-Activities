#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n, i, mult;
	
	for(i=1;i<=10;i++){
		mult = 8*i;
		printf("8 x %d = %d\n", i, mult);
	}

	
	return 0;
}
