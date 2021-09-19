#include <stdio.h>

#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define RESET "\x1b[0m"

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
        printf(GREEN"Aprovado!!!, sua nota e %.1f e voce tem %d falta(s)"RESET, m, f);
    }
    else if(m >= 4.0 && f <= 5){
        printf(YELLOW"Recuperacao!!!, sua nota e %.1f e voce tem %d falta(s)"RESET, m, f);
    }
    else{
        printf(RED"Reprovado!!!, sua nota e %.1f e voce tem %d falta(s)"RESET, m, f);
    }
    return 0;
}