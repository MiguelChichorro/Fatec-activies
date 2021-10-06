#include <stdio.h>

int main(void){
	int a;
	int b;
	int soma = 1;
	float resultado;
	printf("Insira o dividendo e divisor naturais: ");
	scanf("%d %d",&a, &b);
	resultado = dividir(a,b, soma);
	printf("O resultado eh: %.1f\n",resultado);
}
int dividir(int a, int b, int soma){
	if(a-b<b)
		return soma;
	dividir(a-b,b, soma + 1);
}
