#include <stdio.h>

int main(void){
	int n;
	printf("Digite um numero maior que zero: ");
	scanf("%d",&n);
	par(n);
	return 0;
}
int par(int n){
	if (n==1){
		printf("O numero eh impar\n");
		return 0;
	}
	else if (n==2){
		printf("O numero eh par\n");
		return 0;
	}
	par(n-2);
}
