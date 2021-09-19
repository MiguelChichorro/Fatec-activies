#include <stdio.h>

int main(void){
    float p1, p2, m;
    printf("Digite sua primera nota: ");
    scanf("%f", &p1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &p2);
    m = (p1+p2) / 2;
    if(m >= 6.0){
        printf("Aprovado!!!, sua nota e %.1f", m);
    }
    else{
        printf("Reprovado!!!, sua nota e %.1f", m);
    }
    return 0;
}