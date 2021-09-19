#include <stdio.h>

int main(void){
   float km, litros, media;
   printf("Digite quantos km percorreu: ");
   scanf("%f", &km);
   printf("Digite quantos litros gastou: ");
   scanf("%f", &litros);
   media = litros / km;
   printf("sua media e %.1f litros por km", media);
   return 0;
}