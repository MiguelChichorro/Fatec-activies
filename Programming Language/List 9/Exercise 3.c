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

void troca(funcionarios v[], int i, int j)
{   
    int x = v[i].codigo;
	v[i].codigo = v[j].codigo;
	v[j].codigo = x;
}

void ordenatab(funcionarios v[], int n)
{
	for(int i=1;i<=n-1;i++)
	{
	for(int j=0; j<n-i; j++)
	{
		if( v[j].codigo>v[j+1].codigo)
		{
			troca(v,j,j+1);
		}
	}
    }	
}

void exibetab(funcionarios v[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%.3d  %s  %.3f     %d/%02d/%d\n",v[i].codigo,v[i].nome,v[i].salario,v[i].admissao.dia,v[i].admissao.mes,v[i].admissao.ano);
	}
}

int main(void)
{
    funcionarios v[]={{051,"Ana", 10.000, {14,02,2000}},
	                 {016,"Pedro",10.000, {14,10,2000}},
					 {013,"John",18.000, {06,02,2001}},
					 {054,"Kleber", 9.000,{14,06,1998}},
					 {065,"Bruno", 8.000,{03,12,1999}},
					 {076,"Emerson", 33.000,{18,07,1999}},};
	ordenatab(v,6);
	exibetab(v,6);
	return 0;
}
