#include <math.h>
#include <ctype.h>

int main()
{
	int v[10]={1,12,34,37,41,59,68,83,88,91},x=0;
	do
	{
	printf("Insira um numero inteiro: \t");
	scanf("%d", &x);
	}while(x<0);
	printf("Verificaremos se o numero escolhido esta no vetor crescente!!!\n");
	printf("Legenda\n(1)=Verdadeiro\n(2)=Falso\n\n");
	int p= 0,u =10-1;
	printf("%d: %d\n",x,rbsearch(x,v,10,p,u));
	
	return 0;
}
int rbsearch(int x, int v[],int n,int p, int u)
{
	while(p<=u)
	{
		int m = (p+u)/2;
		if(x==v[m]){return 1;}
		if(x<v[m]){u = m-1;}
		else{p = m+1;}
	}
	return 0;
}
