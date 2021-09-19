#include <stdio.h>

int main(void){
    float raio, perim;
    printf("Qual o raio? ");
    scanf("%f", &raio);
    perim = 2*3.14*raio;
    printf("Perimetro = %.1f\n", perim);
    return 0;
}