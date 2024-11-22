#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float notas(float n1, float n2, float n3, char tipo){

    float med = 0;

    if(tipo == 'A' || tipo == 'a'){
        med = (n1+n2+n3)/3;
        return printf("A média aritmética de %.2f, %.2f e %.2f é: %.2f", n1, n2, n3, med);
    }
    if(tipo == 'A' || tipo == 'a'){
        med = (n1+n2+n3)/3;
        return med;
    }
    else if(tipo == 'P' || tipo == 'p'){
        med = (n1*5+n2*3+n3*2)/10;
        return printf("A média ponderada de %.2f, %.2f e %.2f é: %.2f", n1, n2, n3, med);
    }
    else if(tipo == 'h' || tipo == 'H'){
        if(n1 != 0 && n2 != 0 && n3 != 0){
            med = 1/(((1/n1)+(1/n2)+(1/n3))/3);
            return printf("A média harmônica de %.2f, %.2f e %.2f é: %.2f", n1, n2, n3, med);
        }
        else{
            printf("Não é possível calcular a média harmônica!");
        }
    }
    else{
        printf("Opção inválida!");
    }
}

int main(){
	setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, nota3;
    char tip;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite o tipo de média que deseja: ");
    scanf(" %c", &tip);

    notas(nota1, nota2, nota3, tip);







    return 0;
}