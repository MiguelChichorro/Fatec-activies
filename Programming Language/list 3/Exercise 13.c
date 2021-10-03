#include <stdio.h>
#include <stdlib.h>

int main(void){
	int caixa;
	float valor = 0, total = 1000, saque = 0;
	do{
		printf("Caixa eletronico\n");
		printf("Qual operacao gostaria de realizar?\n");
		printf("1 - Deposito\n");
		printf("2 - Saque\n");
		printf("3 - Saldo\n");
		printf("4 - Sair\n");
		scanf("%d", &caixa);
		switch(caixa){
			case 1:	printf("Insira o valor que gostaria de depositar:\n");
			scanf("%f", &valor);
			total += valor; break;
			case 2:	printf("Insira o valor que gostaria de sacar:\n");
			scanf("%f", &saque);
			if (saque > total){
				printf("Nao foi possivel realizar o saque, tente outro valor.\n");break;
			}else if(saque <= total){
				total -= saque;
			    printf("Voce sacou: R$%.2f\n", saque);break;
			}
			case 3: printf("Seu saldo e de: R$%.2f\n", total); break;
			case 4: exit(1);    
		}
	}while(caixa !=4);
	return 0;
}
