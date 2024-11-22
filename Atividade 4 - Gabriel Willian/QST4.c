#include <stdio.h>
#include <locale.h>


int absoluto(int a){
    
    if(a<0){
        a = a*-1;

        return a;

    }
    else{
        return a;
    }

    return a;
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n1, n2, n3, n4, n5;

    printf("Digite um valor para n1: ");
    scanf("%d", &n1);
    printf("Digite um valor para n2: ");
    scanf("%d", &n2);
    printf("Digite um valor para n3: ");
    scanf("%d", &n3);
    printf("Digiteum valor para n4: ");
    scanf("%d", &n4);
    printf("Digiteum valor para n5: ");
    scanf("%d", &n5);

    printf("O valor absoluto de n1 é %d, de n2 %d, de n3 %d, de n4 %d, de n5 %d.", absoluto(n1),absoluto(n2),absoluto(n3), absoluto(n4), absoluto(n5));

    return 0;
}