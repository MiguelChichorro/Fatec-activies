#include <stdio.h>

int main (void){
	int n;
	printf("Numero do dia da semana? ");
	scanf("%d", &n);
	dds(n);
	return 0;
}

int dds(n){
	if ((n<1) && (n>7))
		return 0;
	else
		switch(n){
			case 1:printf("Segunda Feira\n");break;		
			case 2:printf("Terça Feira\n");break;
			case 3:printf("Quarta Feira\n");break;	
			case 4:printf("Quinta Feira\n");break;	
			case 5:printf("Sexta Feira\n");break;		
			case 6:printf("Sabado\n");break;		
			case 7:printf("Domingo\n");break;
		}
	return 0;
}
