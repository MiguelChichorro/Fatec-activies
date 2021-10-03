#include <stdio.h>
#include <math.h>

int main(void){
	int dia, mes, ano, aux1, aux2, res, resfinal;
	printf("Insira sua data de nascimento: \n");
	scanf("%d %d %d", &dia, &mes, &ano);
	dia = dia * 100;
	res = dia + mes;
	res = res + ano;
	aux1 = res / 100;
	aux2 = res % 100;
	res = aux1 + aux2;
	resfinal = res % 5;
	switch(resfinal){
		case 0:printf("Timido"); break;
		case 1:printf("Sonhador"); break;
		case 2:printf("Paquerador"); break;
		case 3:printf("Atraente"); break;
		case 4:printf("Irresistivel"); break;
	}
	return 0;
}
