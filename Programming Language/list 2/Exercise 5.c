#include <stdio.h>

int main(void){
    int n1, n2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    if(n1 > n2){
        printf("O numero %d e o maior", n1);
    }
    else if(n2 > n1){
        printf("O numero %d e o maior", n2);
    }
    else{
        printf("O dois numeros sao iguais");
    }
    return 0;
}