#include <stdio.h>
#include <string.h>

int ocorrencias(char v[])
{
	int soma= 0,i= 0;
	for(i=0;v[i]!='\0';i++)
	{
		if(v[i]=='a')
		{
			soma++;
		}
	}
	return soma;
}

int main()
{
	char v[] = "banana";
	printf("Ocorrencias: %d\n", ocorrencias(v));
	return 0;
}
