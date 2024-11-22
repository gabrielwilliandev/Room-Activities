# Atividade 12
## Engenharia de Software
##### Aluno: Gabriel Willian



# Questão 1

```
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct Aluno {
	char nome[100];
	int faltas;
	float nota;
}aluno_t;


int main(){
	setlocale(LC_ALL, "Portuguese");
	aluno_t *p1;
	
	p1 = (aluno_t *) malloc(sizeof(aluno_t));
	if(p1 == NULL){
		printf("Erro na alocação!");
		return 1;
	}
	
	printf("Digite o nome do aluno: ");
	fgets(p1->nome, sizeof(p1->nome), stdin);
	p1->nome[strlen(p1->nome)-1] = '\0';
	printf("Digite a quantidade de faltas: ");
	scanf("%d", &p1->faltas);
	fflush(stdin);
	printf("Digite a nota: ");
	scanf("%f", &p1->nota);
	fflush(stdin);
	
	if(p1->faltas<15 && p1->nota >= 7){
		printf("O aluno %s está aprovado, com a nota de %.2f e %d faltas!", p1->nome, p1->nota, p1->faltas);
	}
	else{
		printf("O aluno %s está reprovado, com a nota de %.2f e %d faltas!", p1->nome, p1->nota, p1->faltas);
	}
	
	return 0;
}
```

# Questão 2

##### a) 
A função free serve para liberar a memória alocada inicialmente para uma determinada função. Quando damos free, o espaço inicialmente alocado, agora pode ser alocado por qualquer outra função que o sistema achar necessário. 

##### b)
Sim, o ponteiro não fica inutilizável ao ser liberado, ele pode receber novos valores.

##### c)
Os overflows podem ser causados por vários motivos, na alocação de memória, quando não liberamos a memória alocada por exemplo.

##### d)
O malloc retorna nada(NULL);

##### e)
O calloc serve também para alocar memória, mas ele recebe também a quantidade de elementos que iremos alocar memória, além do seu tamanho.

##### f)
O malloc necessita apenas do tamanho do elemento que será alocado. Já o calloc necessita também da quantidade de elementos.

# Questão 3

##### a)
Podemos abrir um arquivo de algumas formas, sendo elas:

- "r" - Serve para ler um determinado arquivo.

- "w" - Serve para abrir e escrever em um arquivo, apagando qualquer conteúdo que estiver armazenado nele.

- "a" - Serve para abrir e escrever em um arquivo, concatenando a escrita e mantendo qualquer conteúdo que estiver armazenado.

- "r+" - Permite que eu abra o arquivo no modo leitura e também permite a escrita.

- "w+" - Permite a escrita e leitura do arquivo, criando o arquivo se ele não existir.

- "a+" - Permite a escrita e leitura do arquivo, criando o arquivo se ele não existir e posicionando o ponteiro no final do arquivo.

##### b)

- fprintf: Serve para escrever o texto no arquivo apontado pelo usuário.

- fgets: Recebe um texto digitado pelo usuário e armazena em uma variável. Ela precisa do tamanho da variável para armazenar.

- fwrite: Serve para escrever no arquivo binário, ela recebe o endereço da variável que você deseja escrever, o ponteiro para o arquivo, o tamanho do dado que você quer escrever e a quantidade de itens. Ele retorna a quantidade de elementos gravados.

- fread: Essa função serve para abrir arquivos binários, ela recebe o endereço para guarda a informação, o tamanho da informação, a quantidade e o ponteiro do arquivo. Ela retornao número de elementos lidos.

# Questão 4
O resultado é 0.00, pois o cast é feito depois da divisão, como é uma divisão de inteiros, o resultado será 0 e depois será convertido para float, ficando 0.00.

# Questão 5

5. a = 1.0, b = 2.0, c = 3.0;

6. a = 1, b = 2, c = 4;

7. a = 2, b = 2, c = 2;

8. b = 2, d = 5;

9. a = 2.0, b = 2.0, c = 2.0;

10.  c = 2, d = 4, e = 5.0;

11. a = 2, b = 2, c = 2;

12. e = 6, c = 2;

13. a = 3, b = 2;

Valores finais: a = 3, b =2, c = 2, d = 4, e = 6;

# Questão 6

w = 16.

# Questão 7

```
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char nome[100];
	float nota, freq;
	
	printf("Digite o nome do aluno: ");
	fgets(nome, 99, stdin);
	nome[strlen(nome)-1] = '\0';
	printf("Digite a nota do aluno: ");
	scanf("%f", &nota);
	printf("Digite a frequência do aluno em %%: ");
	scanf("%f", &freq);
	
	if(nota >= 7 && freq >= 75){
		printf("Aluno %s foi aprovado com a nota de %.2f e frequência de %.1f%%!", nome, nota, freq);
	}
	else{
		printf("Aluno %s foi reprovado com a nota de %.2f e frequência de %.1f%%!", nome, nota, freq);
	}
	
```

# Questão 8
Um vetor é uma estrutura que permite que seja declarado em uma uma única variável diversas variáveis do mesmo tipo de maneira sequêncial, podendo ser acessadas indívidualmente através de um indíce.
Os vetores tem tamanho predefinido e ocupam posições contíguas de memória.