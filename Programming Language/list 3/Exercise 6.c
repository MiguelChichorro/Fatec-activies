#include <stdio.h>
#include <math.h>

int main(void){
	int n, soma;
	printf("Termial do numero: ");
	scanf("%d", &n);
	for(soma = 0; n >= 1; n --)
		soma = soma + n;
	printf("Termial: %d\n", soma);
return 0;
}
