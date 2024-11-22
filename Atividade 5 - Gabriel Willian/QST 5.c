#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num[20], i;
	
	srand((unsigned)time(NULL));
	
	for( i = 0; i < 20; i++){
		num[i] = rand() % 99;
		printf("%dº valor de num: %d\n", i, num[i]);
	}
	printf("\n");
	printf("Os números inversos: \n");
	for( i = 19; i >= 0; i--){
	
		printf("%dº valor de num: %d\n", i, num[i]);
	}
	
	
	
	
	return 0;
}
