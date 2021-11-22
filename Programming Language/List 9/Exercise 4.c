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
void ordenatab(funcionarios v[], int n);
void exibetab(funcionarios v[],int n);
int main()
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
void ordenatab(funcionarios v[], int n)
{
	int i,j,k;
	char aux[1];
	for(i=1;i<=n-1;i++) 
		for(j=0; j<n-i; j++)
			if(strcmp(v[j].nome,v[j+1].nome)==1) 
			{
				for(k=0;k<8;k++) 
				{
					aux[0]=v[j].nome[k];
					v[j].nome[k]=v[j+1].nome[k];
					v[j+1].nome[k]=aux[0];
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
