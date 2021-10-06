#include <stdio.h>

int cp(int n){
	for (int i = 0; i <= n; i++)
		printf("%d\n", i);
		return 1;
}

int main (void){
	int n;
	printf("Num? ");
	scanf("%d", &n);
	cp(n);
	return 0;
}
