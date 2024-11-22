#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num[10], i, j, guarda;
	
	srand((unsigned)time(NULL));
	printf("Antes:\n");
	for( i = 0; i < 10; i++){
		num[i] = rand() % 100;
		printf("%d ", num[i]);
	}
	
	for( j = 0; j < 10; j++){
		for( i = 0; i < 10; i++){
			if(num[i] > num[i+1]){
				guarda = num[i+1];
				num[i+1] = num[i];
				num[i] = guarda;
			}
		}
	}
	printf("\nDepois:\n");
	for( i = 0; i < 10; i++){
		printf("%d ", num[i]);
	}
	
	return 0;
}
