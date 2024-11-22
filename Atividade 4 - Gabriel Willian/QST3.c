#include <stdio.h>
#include <locale.h>


int pote(int a, int b){
    
    int i;
    int res = 1;
    for(i=0;i<b;i++){
        
        res = res*a;
    }

    return res;
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n1, n2;

    printf("Digite um valor para base: ");
    scanf("%d", &n1);
    printf("Digite um valor para expoente: ");
    scanf("%d", &n2);

    printf("A potência é: %d", pote(n1,n2));

    return 0;
}