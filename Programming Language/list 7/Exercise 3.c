#include <stdio.h>
#include <math.h>
#include <ctype.h>

void exibe(int v[], int n);
void empurra(int v[], int n);
void troca(int v[], int i,int j);
void bsr(int v[], int n);
int main(void)
{
	int v[5]={48,19,31,52,27};
	bsr(v,5);
	exibe(v,5);
	
	return 0;
}
void exibe(int v[], int n)
{
	for(int i=0;i<5;i++){
	printf("%d ", v[i]);
    }
}
void troca(int v[], int i, int j)
{
	int x = v[i];
	v[i] = v[j];
	v[j] = x;
}
void bsr(int v[], int n)
{
	empurra(v,5);
	for(int i=1;i<=n-1;i++)
	{
	for(int j=0; j<n-i; j++)
	{
		if( v[j]>v[j+1])
		{
			troca(v,j,j+1);
		}
	}
    }	
}
void empurra(int v[], int n)
{
	int aux=v[0];
	for(int i=0;i<5;i++)
	{
		if(v[i]>aux)
		{aux = v[i];}
	}
	v[3] = v[4];
	v[4] =  aux;
}
