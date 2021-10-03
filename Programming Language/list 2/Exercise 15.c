#include <stdio.h>
int main(void){
    float M, A, IMC;
    printf("Massa(Kg) e Altura (M): ");
    scanf("%f %f", &M, &A);
    IMC = M / (A*A);
    printf("IMC: %.1f\n", IMC);
    if (IMC < 18.5) {
        puts("Situacao: Magra");
    }
    else if (IMC <= 30){
        puts("Situacao: Ideal ");
    }
    else if (IMC > 30) {
        puts("Situacao: Obesa");
    }return 0;
}