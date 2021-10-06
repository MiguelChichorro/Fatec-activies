#include <stdio.h>

int main (void) 
{
	int dia, mes, ano;
	printf("Insira uma data: ");
	scanf("%d %d %d", &dia, &mes, &ano);
	if (valida(dia, mes, ano) == 1)
	{
		printf("Data valida\n");
		printf("O ultimo dia deste mes eh: %d\n", ultimo_dia(mes, ano));
		if (bissexto(ano)==1)
			printf("Este ano eh bissexto!\n");
		else
			printf("Este ano nao eh bissexto!\n");
		exibe_ds(dia, mes, ano);
	}
	else
	{
		printf("Data invalida\n");
	}
	return 0;
}

int valida (int d, int m, int a)
{
	if (m==2 && bissexto(a) == 1 && (d>29 || d<1)){
		return 0;
	}

	else if (m==2 && bissexto(a) == 0 && (d>28 || d<1)){
		return 0;
	}

	if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && (d>31 || d<1))
		return 0;

	if ((m == 4 || m == 6 || m == 9 || m == 11) && (d>30 || d<1))
		return 0;

	if(m > 12 || m<1 || a<1){

	}

	else
		return 1;
}

int ultimo_dia(int m,int a)
{
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
		return 31;
    if (m == 4 || m == 6 || m == 9 || m == 11)
		return 30;
	if (m == 2 && bissexto(a)==1)
		return 29;
	if (m == 2 && bissexto(a)==0)
		return 28;
}

int bissexto (a)
{
	if (a % 400 == 0) {
		return 1;		
	}
	else if ((a % 4 == 0) && (a % 100 != 0)) {
		return 1;		
	}
	else {
		return 0;
	}
}

int exibe_ds(int d, int m, int a)
{
	if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10) && (d<31)){
		d += 1;
	printf("O proximo dia eh : %d/%d/%d\n", d, m, a);
	return 0;
	}

	if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10) && (d==31)){
		m += 1;
		d = 1;
	printf("O proximo dia eh : %d/%d/%d\n", d, m, a);
	return 0;
	}

	if ((m == 4 || m == 6 || m == 9 || m == 11) && (d<30)){
		d += 1;
	printf("O proximo dia eh : %d/%d/%d\n", d, m, a);
	return 0;
	}

	if ((m == 4 || m == 6 || m == 9 || m == 11) && (d==30)){
		m += 1;
		d = 1;
	printf("O proximo dia eh : %d/%d/%d\n", d, m, a);
	return 0;
	}

	if ((m==2 && bissexto(a)==1) &&(d < 29)){
		d += 1;
	printf("O proximo dia eh : %d/%d/%d\n", d, m, a);
	return 0;
	}

	if ((m==2 && bissexto(a)==1) &&(d== 29)){
		m += 1;
		d = 1;
	printf("O proximo dia eh : %d/%d/%d\n", d, m, a);
	return 0;
	}

	if ((m==2 && bissexto(a)==0) &&(d < 28)){
		d += 1;
	printf("O proximo dia eh : %d/%d/%d\n", d, m, a);
	return 0;
	}
	if ((m==2 && bissexto(a)==0) &&(d== 28)){
		m += 1;
		d = 1;
	printf("O proximo dia eh : %d/%d/%d\n", d, m, a);
	return 0;
	}

	if ((m==12) &&(d==31)){
		m = 1;
		d = 1;
		a += 1;
	printf("O proximo dia eh : %d/%d/%d\n", d, m, a);
	return 0;
	}
}
