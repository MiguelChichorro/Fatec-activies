#include <stdio.h>
#include <string.h>

void exibir(char v[][8])
{	
	for(int i=0;i<1;i++)
	{
		for(int aux=0;aux<6;aux++)
		{
			printf("%s\n",v[aux]);
		}
	}
}

int main(void)
{
	char v[][8]={"Anna","Julia","Cleber","Kleiton","Rodrigo","Paulo"};
	exibir(v);
	return 0;
}
