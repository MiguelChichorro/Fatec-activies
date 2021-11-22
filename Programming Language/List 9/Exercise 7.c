#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct
{
	float x1;
	float x2;
}Ponto ;

Ponto le_ponto(int ponto_a,int ponto_b,int ponto_a2,int ponto_b2,int aux)
{
	float resul=0;
	if(aux==0 )
	{
	Ponto a= {(ponto_a2-(ponto_a))*(ponto_a2-(ponto_a))};
	return a;
	}else
	{
	Ponto b= {(ponto_b2-(ponto_b))*(ponto_b2-(ponto_b))};
	return b;
    }
}
float distancia(Ponto a,Ponto b)
{
	float resul=0;
	resul = sqrt(a.x1 + b.x1);
	return resul;
}

int main()
{
	int aux =0;
	int ponto_a = 0,ponto_b = 0;
	int ponto_a2 = 0,ponto_b2 = 0;
	printf("1-Ponto?\n");
	scanf("%d\n%d", &ponto_a, &ponto_b);
	printf("\n2-Ponto?\n");
	scanf("%d\n%d", &ponto_a2,&ponto_b2);
	Ponto  a = le_ponto(ponto_a,ponto_b,ponto_a2,ponto_b2,aux);
	aux =1;
	Ponto b = le_ponto(ponto_a,ponto_b,ponto_a2,ponto_b2,aux);

	printf("\nDistancia: %.1f\n", distancia(a,b));
	return 0;
}
