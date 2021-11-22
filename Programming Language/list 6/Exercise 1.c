#include <stdio.h>

void binario(int n){
	int v[8];
	for(int i=7;i>0;i--){
		if(n%2!=0){
			v[i] = 1;
			n /= 2;
		}else{
			v[i] = 0;
			n /= 2;
			
		}
	}
	for(int i=1;i<=7;i++)
		printf("%d", v[i]);
	printf("\nIgnore os zeros a esquerda\n");
}

int main (void){
	int n;
	printf("Numero? ");
	scanf("%d", &n);
	binario(n);
	return(0);
}
