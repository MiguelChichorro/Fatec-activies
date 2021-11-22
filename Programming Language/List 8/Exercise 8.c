#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int pus(char v[], int ponteiro);
int main()
{
	int ponteiro = 0;
	char v[] = "35171";
	
	ponteiro = 1;
	printf("Posicao do 1: %d\n", pus(v,ponteiro) );
	ponteiro = 9;
	printf("Posicao do 9: %d\n", pus(v,ponteiro) );
	
	return 0;
}
int pus(char v[], int ponteiro)
{
	int len=0,len2=0;
	char*res=0;
	char aux=0;
	aux = ponteiro + '0';
	len = strlen(v);
	res = strchr(v, aux);
	if(res == NULL)
	{return -1;}
	else
	{len2= strlen(res);
	ponteiro = len - len2;
    return ponteiro;}
}
