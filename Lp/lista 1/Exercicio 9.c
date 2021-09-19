#include <stdio.h>

int main(void){
   float f, c;
   printf("Digite uma temperatura F: ");
   scanf("%f", &f);
   c = (f-32)* 5/9;
   printf("Sua temperatura e %.1f C", c);
   return 0;
}