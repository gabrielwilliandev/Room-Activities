#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int VET[50], i, j, rep = 0;
    int verificados[50] = {0};
    srand((unsigned)time(NULL));

    for( i = 0; i < 50; i++){
    	VET[i] = rand() % 100;
	}
	
	 for( i = 0; i < 50; i++){
    	if(verificados[i]){
    		continue;
		}
	
	

    	for( j = i + 1; j < 50; j++){
    		if(VET[i] == VET[j]){
    			rep = 1;
    			printf("Número repetido %d nas posições %d e %d\n", VET[i], i, j);
    			verificados[j] = 1;
			}
		}	
	
	}
	if(rep == 0){
		printf("Não há números repetidos no vetor.");
	}
    
    
    return 0;
}

