#include <stdio.h>
#include <math.h>
int main(void){
    float peso, altura, imc;
    printf("Qual o peso? ");
    scanf("%f", &peso);
    printf("Qual a altura? ");
    scanf("%f", &altura);
    imc = peso/pow(altura, 2);
    printf("IMC = %.1f\n", imc);
    if (imc <= 30){
        printf("Nao esta obesa!\n");
    }
    else{
        printf("Esta obesa!\n");
    }
    return 0;
}