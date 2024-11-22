#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int verific(int a){

    if(a > 0){
        return 1;
    }
    else{
        return 0;
    }
}

int SomaDivisores(int a){
    int i;
    int rest = 0;

    for( i = 1; i < a; i++){
        if(a%i == 0){
            rest += i;
        }
    }
    return rest;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n1 = -1, n2 = -1, n3 = -1, n4 = -1, n5 = -1, verifica = 0;

    while(n1 <= 0){    
        printf("Digite o primeiro número positivo: ");
        scanf("%d", &n1);
        if(verific(n1) != 1){
            printf("Digite um valor positivo!\n");
        }
}
    while(n2 <= 0){    
        printf("Digite o segundo número positivo: ");
        scanf("%d", &n2);
        if(verific(n2) != 1){
            printf("Digite um valor positivo!\n");
        }
}
    while(n3 <= 0){    
        printf("Digite o terceiro número positivo: ");
        scanf("%d", &n3);
        if(verific(n3) != 1){
            printf("Digite um valor positivo!\n");
        }
}
    while(n4 <= 0){    
        printf("Digite o quarto número positivo: ");
        scanf("%d", &n4);
        if(verific(n4) != 1){
            printf("Digite um valor positivo!\n");
        }
}
    while(n5 <= 0){    
        printf("Digite o quinto número positivo: ");
        scanf("%d", &n5);
        if(verific(n5) != 1){
            printf("Digite um valor positivo!\n");
        }
}

    printf("A soma dos divisores de %d é: %d\n", n1, SomaDivisores(n1));
    printf("A soma dos divisores de %d é: %d\n", n2, SomaDivisores(n2));
    printf("A soma dos divisores de %d é: %d\n", n3, SomaDivisores(n3));
    printf("A soma dos divisores de %d é: %d\n", n4, SomaDivisores(n4));
    printf("A soma dos divisores de %d é: %d\n", n5, SomaDivisores(n5));



    return 0;
}