#include <stdio.h>
#include <math.h>

int main (void) {
	int n,d;
	float raiz;
	printf("Numero? ");
	scanf("%d", &n);
	raiz = sqrt(n);
	raiz = ceil(raiz);
	if (n == 2){
		puts("Eh primo");
	}
    else{
		for (d = 2;d<raiz; d++)
			if(n%d == 0)break;

    	if(n%d == 0)puts("Nao eh primo!");
		else puts("Eh primo!");
	}
	return 0;
}
