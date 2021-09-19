#include <stdio.h>
#include <math.h>
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define RESET "\x1b[0m"
int main(int argc, char** argv)
{
 float a, b, c, x1, x2, delta;
 
 printf("Digite o valor do termo a: ");
 scanf("%f", &a);
 printf("Digite o valor do termo b: ");
 scanf("%f", &b);
 printf("Digite o valor do termo c: ");
 scanf("%f", &c);
 delta = b*b - 4*a*c;
 x1 = (-b + sqrt(delta)) / (2*a);
 x2 = (-b - sqrt(delta)) / (2*a);
 if(delta < 0){
 printf(RED"A equacao nao possui raizes reais.n"RESET);
 } 
 else{
 printf(GREEN"O valor de x1: %.2fn",RESET, x1);
 printf(GREEN"O valor de x2: %.2fn",RESET, x2);
 }
 return 0;
}