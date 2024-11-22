#include <stdio.h>
#include <locale.h>
#include <math.h>

float dist(float x1, float x2, float y1, float y2){
    
    return sqrt(pow((x2-x1), 2)+pow((y2-y1), 2));;
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    float x1, x2, y1, y2;

    printf("Digite um valor para x1: ");
    scanf("%f", &x1);
    printf("Digite um valor para x2: ");
    scanf("%f", &x2);
    printf("Digite um valor para y1: ");
    scanf("%f", &y1);
    printf("Digite um valor para y2: ");
    scanf("%f", &y2);

    printf("A distância entre os pontos (%.0f, %.0f) e (%.0f, %.0f) é: %.2f.", x1, y1, x2, y2, dist(x1, x2, y1, y2));

    return 0;
}