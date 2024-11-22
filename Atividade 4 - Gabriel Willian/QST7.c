#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int verifica(int a){
    if(a%2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n1;

    printf("Digite número para verificar se é par: ");
    scanf("%d", &n1);

    if(verifica(n1) == 1){
        printf("O número é par!");
    }
    else{
        printf("O número é ímpar!");
    }

    return 0;
}