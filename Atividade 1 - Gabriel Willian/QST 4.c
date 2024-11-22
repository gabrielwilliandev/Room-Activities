#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float eleitores, branco, nulo,validos, pb, pn, pv;
	
	printf("Qual o total de eleitores no municipio?: ");
	scanf("%f", &eleitores);
	printf("Qual o total de votos brancos?: ");
	scanf("%f", &branco);
	printf("Qual o total de votos nulos?: ");
	scanf("%f", &nulo);

	
	validos = eleitores - branco - nulo;

	pb = branco/eleitores*100;
	pn = nulo/eleitores*100;
	pv = validos/eleitores*100;


	printf("O total de eleitores foi %.1f, o percentual de votos brancos foi %.1f%%, o percentual de votos nulos foi %.1f%% e o percentual de votos válidos foi %.1f%%!", eleitores, pb, pn, pv);
	
	return 0;
}
