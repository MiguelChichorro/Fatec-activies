#include <stdio.h>

void binario(int n){
	int aux;
	if (n/2!=0){
		aux=n/2;
		binario(aux);
	    printf("%d",n%2);
	}else{
		printf("%d",n%2);
	}
}

int main(void){
	int n;
	printf("Num? ");
	scanf("%d",&n);
	printf("O numero em binario fica:");
	binario(n);
	printf("\n");
	return 0;
}
