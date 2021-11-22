#include <stdio.h>
#include <string.h>

void exibir(char v[][8], int n)
{	
	for(int i=0;i<n;i++)
	{
			puts(v[i]);
		
	}
}

void bsort(char v[][8],int n)
{
    int i,j,k;
	char aux[1];
	for(i=1;i<=n-1;i++) 
		for(j=0; j<n-i; j++)
			if(strcmp(v[j],v[j+1])==1) 
			{
				for(k=0;k<8;k++) 
				{
					aux[0]=v[j][k];
					v[j][k]=v[j+1][k];
					v[j+1][k]=aux[0];
				}
			}	
	exibir(v,n);
}

int main(void)
{
	int n= 6;
	char v[][8]={"Anna","Julia","Cleber","Kleiton","Rodrigo","Paulo"};
	bsort(v,n);
	return 0;
}
