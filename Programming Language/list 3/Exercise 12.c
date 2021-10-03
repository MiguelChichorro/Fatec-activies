#include <stdio.h>
#include <math.h>
int main(void){
	float n=1;
	do{
		printf("Numero real nao negativo? ");
	    scanf("%f", &n);
	}while (n<=0);
	n = sqrt(n);
	printf("%f\n", n);
	return 0;   
}
