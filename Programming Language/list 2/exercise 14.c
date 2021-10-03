#include <stdio.h>
int main(void){
    int placa, finalP; // FinalP - Final da Placa.
    printf("Digite o final da placa: ");
    scanf("%d", &placa);
    finalP = placa % 10;
    printf("Pode dirigir de ");
    switch (finalP){
        case 1: puts("Segunda-Feira"); break;
        case 2: puts("Segunda-Feira"); break;
        case 3: puts("Terca-Feira"); break;
        case 4: puts("Terca-Feira"); break;
        case 5: puts("Quarta-Feira"); break;
        case 6: puts("Quarta-Feira"); break;
        case 7: puts("Quinta-Feira"); break;
        case 8: puts("Quinta-Feira"); break;
        case 9: puts("Sexta-Feira"); break;
        case 0: puts("Sexta-Feira"); break;
        default: break;
    }return 0;
}