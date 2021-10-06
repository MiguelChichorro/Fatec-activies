#include <stdio.h>

int cr(int n){
	if(n==-1)return 1;
	printf("%d\n", n);
	return n - cr(n-1);
}
int main (void){
	int n;
	printf("Num? ");
	scanf("%d", &n);
	cr(n);
	return 0;
}
