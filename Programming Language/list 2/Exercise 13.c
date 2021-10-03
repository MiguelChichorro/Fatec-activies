#include <stdio.h>
int main(void)
{
    int placa, finalP; // FinalP - Final da Placa.
    printf("Digite a placa (Apenas numeros): ");
    scanf("%d", &placa);
    finalP = placa % 10;
    printf("Pode dirigir de: ");
    if (finalP <= 2) { puts("Segunda-Feira"); }
    else if (finalP <=4){ puts("Terca-Feira"); }
    else if (finalP <=6){ puts("Quarta-Feira"); }
    else if (finalP <=8){ puts("Quinta-Feira"); }
    else { puts("Sexta-Feira"); }
    return 0;
}
