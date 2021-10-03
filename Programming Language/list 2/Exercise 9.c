#include <stdio.h>
#include <math.h>

int main(void){
	float salario;
	printf("Insira o salario de um funcionario para calcular o seu Imposto de renda\n");
	scanf("%f", &salario);
	if (salario <= 1903.98) puts("\nIsento");
	else if (salario <= 1903.98 && salario <= 2826.65) puts("\nAliquota de 7.5%");
	else if (salario <= 2826.65 && salario <= 3751.05) puts("\nAliquota de 15.0%");
	else if (salario <= 3751.05 && salario <= 4664.68) puts("\nAliquota de 22.5%");
	else if (salario <= 4664.68) puts("\nAliquota de 27.5%");
	return 0;
}
