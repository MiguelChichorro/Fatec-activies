#include <stdio.h>
#include <string.h>

typedef struct 
{
	int codigo;
	char nome[21];
	float salario;
}func;

void exibetab(func tab[], int linhatab)
{
	for (int i = 0; i < linhatab; i++)
	{
		printf("{%d, %s, %.2f},\n", tab[i].codigo, tab[i].nome, tab[i].salario);
	}
}

int func_codigo(func tab[], int nlinha)
{
	return (tab[nlinha].codigo > tab[nlinha+1].codigo);
}

int func_nome(func tab[], int nlinha)
{
	if (strcmp(tab[nlinha].nome, tab[nlinha+1].nome) == 1)
	{
		return 1;
	}
	return 0;
}

int func_salario(func tab[], int nlinha)
{
	return (tab[nlinha].salario > tab[nlinha+1].salario);
}

void ordena(int (*function)(func tab[], int nlinha), func tab[], int linhatab)
{
	func aux[1];

	for (int i = 1; i <= linhatab-1; i++)
	{
		for (int j = 0; j < linhatab-i; j++)
		{
			if (function(tab, j))
			{
				aux[0] = tab[j];
				tab[j] = tab[j+1];
				tab[j+1] = aux[0];
			}
		}
	}
}

int main()
{	
	func v[] ={	{561, "Eva Maranhao", 9200.00},
				{295, "Ana Teixeira", 6100.00},
				{473, "Denise Lagoa", 8500.00},
				{102, "Catia Telles", 7300.00},
				{384, "Beatriz Lira", 5400.00}};

	printf("Ordenar por\n1-Codigo\n2-Nome\n3-Salario\n\n");
	switch(getchar())
	{
		case '1':
			ordena(func_codigo, v, 5);
			break;
		case '2':
			ordena(func_nome, v, 5);
			break;
		case '3':
			ordena(func_salario, v, 5);
			break;
	}
	printf("Tabela ordenada\n");
	exibetab(v, 5);
	return 0;
}
