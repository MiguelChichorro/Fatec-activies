#include <stdio.h>

int main(void){
   float nota1, nota2, media;
   printf("Digite sua primeira nota: ");
   scanf("%f", &nota1);
   printf("Digite sua segunda nota: ");
   scanf("%f", &nota2);
   media = (nota1 + nota2) / 2;
   printf("sua media e %.1f", media);
   return 0;
}