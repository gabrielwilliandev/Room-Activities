#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int vetor[20], vetor2[19], i = 0, j, k = 0, num, verifica, rep;
    srand((unsigned)time(NULL));

    do {
        vetor[i] = rand() % 100;
        rep = 0;
        for (j = 0; j < i; j++) {
            if (vetor[j] == vetor[i]) {
                rep = 1;
            }
        }

        if (rep == 0) {
            i++;
        }

    } while (i < 20);

    for (i = 0; i < 20; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\nDigite mais um valor: ");
    scanf("%d", &num);

    for (i = 0; i < 20; i++) {
        if (vetor[i] == num) {
            verifica = 1;
        } else {
            vetor2[k] = vetor[i];
            k++;
        }
    }

    if (verifica == 1) {
        printf("Número encontrado, o novo vetor é:\n");
        for (i = 0; i < 19; i++) {
            printf("%d ", vetor2[i]);
        }
    } else {
        printf("Valor não encontrado! O vetor segue sendo:\n");
        for (i = 0; i < 20; i++) {
            printf("%d ", vetor[i]);
        }
    }

    return 0;
}

