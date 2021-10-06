#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, char a, char b, char c){
	if (n == 1)
		printf("mova disco %d de %c para %c\n", n, a, b);
	else{
	    hanoi(n - 1, a, c, b);
		printf("Mova o disco %d de %c para %c\n", n, a, b);
		hanoi(n - 1, c, b, a);
	}
}
int main(void){
int n;
	printf("Insira a quantidade de discos: \n");
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');
return 0;
}
