#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int verifica(int a){
    if(a >= 1){
        return 1;
    }
    else if( a == 0){
        return 0;
    }
    else{
        return -1;
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n1;

    printf("Digite número para verificar se é positivo, negativo ou zero: ");
    scanf("%d", &n1);

    if(verifica(n1) == 1){
        printf("O número é positivo!");
    }
    else if(verifica(n1) == 0){
        printf("O número é zero!");
    }
    else{
        printf("O número é negativo!");
    }

    return 0;
}