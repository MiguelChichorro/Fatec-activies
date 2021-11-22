#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 15
void exibe(int mapa[MAX][MAX]){
	int linha, coluna;
	for(coluna = 0; coluna <= MAX-1; coluna++){
		for(linha = 0; linha <= MAX-1; linha++){
			if(mapa[coluna][linha] == 1){
				printf("\xDB\xDB");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
}
void gera(int mapa[MAX][MAX]){
	int lin, col, temp;
	for(lin = 0; lin <= MAX-1; lin++){
		for(col = 0; col <= MAX-1; col++){
			temp = rand()%4;
			mapa[lin][col] = temp;
		}
	}
	for(col = 0; col <=MAX-1; col++){
		mapa[0][col] = 1;
	}
	for(col = 0; col <=MAX-1; col++){
		mapa[MAX-1][col] = 1;
	}
	for(lin = 0; lin <=MAX-1; lin++){
		mapa[lin][0] = 1;
	}
	for(lin = 0; lin <=MAX-1; lin++){
		mapa[lin][MAX-1] = 1;
	}
	mapa[1][0] = 3;
	mapa[MAX-2][MAX-1] = 3;
	return;
}
void mostra(char c, int i, int j){
	_gotoxy(2*j+1, i+1);
	printf("%c%c\b",c,c);
	_sleep(1);
}
int sai(int m[MAX][MAX], int i, int j){
	m[i][j] = 1;
	mostra('\xb0',i,j);
	if(i==MAX-2 && j==MAX-1) return 1;
	if(m[i+1][j]!=1 && sai(m, i+1, j)) return 1;
	if(m[i][j+1]!=1 && sai(m,i,j+1)) return 1;
	if(m[i-1][j]!=1 && sai(m,i-1,j)) return 1;
	if(j>0 && m[i][j-1] !=1 && sai(m,i,j-1)) return 1;
	mostra(' ',i,j);
	return 0;
}
int main(void) {
  	int m[MAX][MAX];
	srand(time(NULL));
	gera(m);
	exibe(m);
	sai(m,1,0);
	return 0;
}
