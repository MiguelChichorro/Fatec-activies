#include <stdio.h>

int main (void){
	int n;
	printf("Numero? ");
	scanf("%d", &n);
	for(int i = n; i>=0; i--)
		printf("%d\n", i);
	return 0;
}
