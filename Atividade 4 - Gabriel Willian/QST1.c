#include <stdio.h>
#include <locale.h>

int ret(int a, int b){

    if(a<b){
        return a;
    }
    else{
        return b;
    }

    return 0;
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n1, n2;

    printf("Digite um valor para n1: ");
    scanf("%d", &n1);
    printf("Digite um valor para n2: ");
    scanf("%d", &n2);

    printf("Entre %d e %d o menor número é: %d", n1, n2, ret(n1, n2));



    return 0;
}