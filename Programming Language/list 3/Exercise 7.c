#include <stdio.h>

int main(void){
 	int num,soma,resto,aux;
	printf("Numero? ");
  	scanf("%d",&num);
	aux = num;
	soma=0;
  	while(num>0){
    	soma+=num%10;
    	num/=10;
 	}
	resto = soma %10;
	printf("Numero da conta : %06d-%d\n",aux,resto);
    return 0;
}
