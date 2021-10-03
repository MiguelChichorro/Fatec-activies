#include <stdio.h>
#include <math.h>

int main(void){
	float x, y;
	char o;
	printf("Expressao? ");
	scanf("%f %c %f", &x, &o, &y);
	switch(o){
		case '+':printf("Valor = %.2f\n", x+y); break;
		case '-':printf("Valor = %.2f\n", x-y); break;
		case '*':printf("Valor = %.2f\n", x*y); break;
		case 'x':printf("Valor = %.2f\n", x*y); break;
		case '/':if(y==0){
			printf("Nao eh possivel dividir por zero\n");
		}
		else{
			printf("Valor = %.2f\n", x/y); break;
		}
		case ':':if(y==0){
			printf("Nao eh possivel dividir por zero\n");
		}
		else{
			printf("Valor = %.2f\n", x/y); break;
		}
		default : printf("Operador invalido: %c\n", o);
	}return 0;
}
