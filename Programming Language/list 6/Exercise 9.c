#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define iguais(a,b,c) (a!=' ' && a==b &&  a==c)

int vencedor(char m[3][3]);
void exibe(char m[3][3]);
void usuario(char m[3][3]);
void computador(char m[3][3]);

int main(){
	char m[3][3] = {{' ', ' ', ' '},{' ', ' ',' '},{' ', ' ', ' '}};
	int n = 0;
	while(vencedor(m)==0){
		usuario(m);
		computador(m);
		exibe(m);
		n++;
	}
	printf("\nVencedor: %c\n\n",vencedor(m));
	return 0;

}

void computador(char m[3][3]){
	int linha = 0, coluna=0;
	srand(time(NULL));
	linha = rand()%3;
	coluna = rand()%3;
	while(m[linha][coluna]== 'x' ||m[linha][coluna]== 'o'){
		srand(time(NULL));
		linha = rand()%3;
	    coluna = rand()%3;
	}
	m[linha][coluna] = 'o';

}

void usuario(char m[3][3]){
	int linha=0,coluna=0;
	printf("Insira a linha onde deseja jogar o X: ");
	scanf("%d",&linha);
	while(linha>=4){
		printf("Voce inseriu uma linha invalida\nInsira a linha onde deseja jogar o X: ");
		scanf("%d",&linha);
	}
	printf("Insira a coluna onde deseja jogar o X: ");
	scanf("%d",&coluna);
	while(coluna>=4){
		printf("Voce inseriu uma coluna invalida\ninsira a coluna onde deseja jogar o X: ");
		scanf("%d",&coluna);
	}
	linha = linha - 1;
	coluna = coluna -1;
	while(m[linha][coluna]=='x'||m[linha][coluna]=='o'){
		printf("Voce inseriu uma posicao invalida!!!\nDigite uma nova linha para jogar o X: ");
		scanf("%d",&linha);
		printf("Insira uma nova coluna para jogar o X: ");
		scanf("%d",&coluna);
		linha = linha - 1;
		coluna = coluna -1;
	}
	m[linha][coluna] = 'x';
}

void exibe(char m[3][3]){
	for(int i=0;i<3; i++){
		for(int j=0;j<3; j++){
			printf("%c | ", m[i][j]);
		}
		printf("\n");
	}
}

int vencedor(char m[3][3]){
	for(int i=0;i<3; i++){
		if(iguais(m[i][0],m[i][1],m[i][2]) ) return m[i][0];
		if(iguais(m[0][i],m[1][i],m[2][i]) ) return m[0][i];	
	}
	if(iguais(m[0][0],m[1][1],m[2][2]) ) return m[0][0];
	if(iguais(m[0][2],m[1][1],m[2][0]) ) return m[0][2];
	return 0;
}
