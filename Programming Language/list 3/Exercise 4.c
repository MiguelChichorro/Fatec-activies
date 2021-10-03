#include <stdio.h>
#include <math.h>

int main (void){
	int n;
	float x,a;
	printf("Insira um numero real e um natural quais queres ");
	scanf("%f %d", &x, &n);
	a = pow(x,n);
	printf("Potencia de x elevado a n = %.4f\n",a);
	return 0;
}
