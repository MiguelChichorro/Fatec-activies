#include <stdio.h>
#include <math.h>

int main(void){
	int n, fat;
	printf("Fatorial do numero: ");
	scanf("%d", &n);
	printf("Fatorial: %d\n", fatorial(n, fat));
return 0;
}
int fatorial (n, fat){
	for(fat = 1; n > 1; n = n - 1)
		fat = fat * n;
	return fat;
}
