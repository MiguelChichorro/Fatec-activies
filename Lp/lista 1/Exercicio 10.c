#include <stdio.h>
#include <math.h>

int main(void){
    float xp, yp, xq, yq, aux;
    printf("Digite o xp: ");
    scanf("%f",&xp);
    printf("Digite o yp: ");
    scanf("%f",&yp);
    printf("Digite o xq: ");
    scanf("%f",&xq);
    printf("Digite o yq: ");
    scanf("%f",&yq);
    aux = sqrt(pow(xq - xp, 2) + pow(yq - yp, 2));
    printf("A distancia e: %.2f", aux);
    return 0;
}