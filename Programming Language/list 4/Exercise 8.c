#include <stdio.h>

int main (void) 
{
	char x;
	printf("Caractere? ");
	scanf("%c", &x);
	printf("O caractere digitado em minusculo eh %c\n", minuscula(x));
	return 0;
}

int minuscula(c){
	if ((c)>=65 && (c)<=90){
		(c) += 32;
		return (c);
	}
	if ((c)>=97 && (c)<=122)
		return (c);
}
