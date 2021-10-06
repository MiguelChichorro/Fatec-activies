#include <stdio.h>

int main(){
	int a, b, cont = 1, aux = 0;
	printf("Insira dois termos naturais para multiplicacao: ");
	scanf("%d %d",&a, &b);
	aux = a;
	printf("O resultado eh: %d\n",mult(a,b,cont,aux));
}
int mult(int a, int b, int cont,int aux){
	if(cont==b)return a;
	mult(a+aux,b, cont+1, aux);
}
