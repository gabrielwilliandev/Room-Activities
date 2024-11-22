#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "Portuguese");
    int mat[3][3], i, j, det;
    srand((unsigned)time(NULL));


    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            mat[i][j] = rand() % 10;
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    det = (mat[0][0] * mat[1][1] * mat[2][2] +
           mat[0][1] * mat[1][2] * mat[2][0] +
           mat[0][2] * mat[1][0] * mat[2][1]) 
          - (mat[0][2] * mat[1][1] * mat[2][0] +
             mat[0][1] * mat[1][0] * mat[2][2] +
             mat[0][0] * mat[1][2] * mat[2][1]);

    printf("O valor da determinante é: %d\n", det);

    return 0;
}

