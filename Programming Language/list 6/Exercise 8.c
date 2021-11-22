#include <stdio.h>
#define iguais(a,b,c) (a!=' ' && a==b &&  a==c)

int vencedor(char m[3][3]);
void exibe(char m[3][3]);
void usuario(char m[3][3]);

int main(){
	char m[3][3] = {{' ', ' ', ' '},{' ', ' ',' '},{' ', ' ', ' '}};
	int n = 0;
	while(vencedor(m)==0){
		usuario(m);
		exibe(m);
		n++;
	}
	printf("\nVencedor: %c\n\n",vencedor(m));
	return 0;

}

void usuario(char m[3][3]){
	int linha=0,coluna=0;
	printf("Insira a linha onde deseja jogar o X: ");
	scanf("%d",&linha);
	while(linha>=4){
		printf("Voce inseriu uma linha invalida\ninsira a linha onde deseja jogar o X: ");
		scanf("%d",&linha);
	}
	printf("Insira a coluna onde deseja jogar o X: ");
	scanf("%d",&coluna);
	while(coluna>=4){
		printf("Voce inseriu uma coluna invalida\ninsira a coluna onde deseja jogar o X: ");
		scanf("%d",&coluna);
	}
	m[linha=linha-1][coluna=coluna-1] = 'x';
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
