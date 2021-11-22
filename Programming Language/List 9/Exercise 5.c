#include <stdio.h>
#include <string.h>

typedef struct
{
	int dia;
	int mes;
	int ano;
} Data;
typedef struct
{
	int codigo;
	char nome[31];
	float salario;
	Data admissao;
} funcionarios ;

void total_salario(funcionarios v[],int n)
{
	float aux = 0;
	for(int i=0;i<n;i++)
	{
		aux = aux + v[i].salario;
	}
	
	printf("O Salario Total eh: %.3f\n", aux);
}

int main()
{
    funcionarios v[]={{051,"Ana", 10.000, {14,02,2000}},
	                 {016,"Pedro",10.000, {14,10,2000}},
					 {013,"John",18.000, {06,02,2001}},
					 {054,"Kleber", 9.000,{14,06,1998}},
					 {065,"Bruno", 8.000,{03,12,1999}},
					 {076,"Emerson", 33.000,{18,07,1999}},};
	total_salario(v,6);
	return 0;
}
