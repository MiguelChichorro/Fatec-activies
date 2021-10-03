#include <stdio.h>

int main(void){
	int n, n_max = 0, n_min = 99999;
	while(1){
		printf("Digite uma sequencia de numeros, onde o ultimo deve ser igual a zero: ");
		scanf("%d", &n);
		if (n==0)
			break;
		if (n>n_max)
			n_max=n;
		if (n<n_min)
			n_min=n;
	}
	printf("Os numeros maximo e minimo da sequencia sao: %d %d\n", n_max, n_min);
}
