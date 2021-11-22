#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{
	int v[10]={55,13,69,45,2,92,18,78,7,39},x=0;
	do
	{
	printf("Insira um numero inteiro: \t");
	scanf("%d", &x);
	}while(x<0);
	printf("O numero esta no vetor?\n");
	printf("%d: %d\n",x, rlsearch(x,v,10));
	
	return 0;
}
int rlsearch(int x, int v[],int n)
{
	for(int i=0; i<n; i++)
	{
		if(x==v[i])
		{
			return 1;
		}
	}
	
	return 0;
}
