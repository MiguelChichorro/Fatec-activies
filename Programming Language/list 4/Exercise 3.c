#include <stdio.h>
#define maiuscula(c) ((c)>=65 && (c)<=90)

int main (void){
	char x;
	printf("Caractere? ");
	scanf("%c", &x);
	printf("Maiuscula? %s\n", maiuscula(x) ? "sim" : "nao");
	return 0;
}
