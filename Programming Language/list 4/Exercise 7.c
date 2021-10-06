#include <stdio.h>
#include <math.h>

int main (void){
	int n,res,soma;
	printf("Numero? ");
	scanf("%d", &n);
	printf("\nQuadrado deste numero eh = %2d\n", quadradosperfeitos(res,n,soma));
	return 0;
}

int quadradosperfeitos (res,n,soma){
	res = 1;
	soma = res;
	printf("\n%d",res);
	for (int i = 1; i < n ;i++){
		res = res + 2;
		soma = soma + res;
		printf ("+%d",res);
	}
	return soma;
}
