#include <stdio.h>
#include <string.h>

typedef struct
{
	char livro[31];
	char autor[31];
	int ano;
} Lista_Livro ;

void exibe_lista(Lista_Livro v[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%s     %s     %d\n",v[i].livro,v[i].autor,v[i].ano);
	}
}

int main()
{
    Lista_Livro v[]={{"Frankenstein","Mary Shelley", 1818,},
	                 {"Dracula","Bram stoker",1897,},
					 {"Carmilla","Sheridan La Fanu",1872,},
					 {"Varney","Thomas Prest", 1847,},
					 };
	exibe_lista(v,4);
	return 0;
}
