#include <stdio.h>

int main(void){
    float p1, p2, m;
    int f;
    printf("Digite quantas faltas teve: ");
    scanf("%d", &f);
    printf("Digite sua primera nota: ");
    scanf("%f", &p1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &p2);
    m = (p1+p2) / 2;
    if(m >= 6.0 && f <= 5){
        printf("Aprovado!!!, sua nota e %.1f e voce tem %d falta(s)", m, f);
    }
    else{
        printf("Reprovado!!!, sua nota e %.1f e voce tem %d falta(s)", m, f);
    }
    return 0;
}