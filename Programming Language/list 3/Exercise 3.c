#include <stdio.h>
#include <math.h>

int main (void){
	int n,res,soma;
	printf("Numero? ");
	scanf("%d", &n);
	res = 1;
	soma = res;
	printf("\n%d",res);
	for (int i = 1; i < n ;i++){
		res = res + 2;
		soma = soma + res;
		printf (" + %d",res);
	}
	printf("\nQuadrado de %d = %2d\n",n,soma);
	return 0;
}
