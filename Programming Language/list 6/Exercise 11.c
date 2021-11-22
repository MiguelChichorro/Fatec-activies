#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#define iguais(a,b,c) (a!=' ' && a==b && b==c)
void exibe(char m[3][3]){
	_clrscr();
	for(int i=0; i<3;i++){
		printf(" %c | %c | %c \n", m[i][0],m[i][1],m[i][2]);
		if(i<2) puts("---+---+---");
	}
}
int vencedor(char m[3][3]){
	for(int i=0; i<3; i++){
		if(iguais(m[i][0], m[i][1], m[i][2])) return m[i][0];
		if(iguais(m[0][i], m[1][i], m[2][i])) return m[0][i];
	}
	if(iguais(m[0][0], m[1][1], m[2][2])) return m[0][0];
	if(iguais(m[0][2], m[1][1], m[2][0])) return m[0][2];
	return ' ';
}
int espacolivre(char m[3][3]){
	int livre = 0;
	for(int x = 0; x < 3; x++){
		for(int y = 0; y < 3; y++){
			if(m[x][y] == ' ') livre++;
		}
	}
	return livre;
}
void usuario(char m[3][3]){
	int x, y;
	printf("insira uma posicao para jogar\n");
	scanf("%d %d", &x, &y);
	if(m[x][y] != ' ' || x > 2 || y > 2){
		printf("Posicao invalida, tente novamente");
		usuario(m);
	}
	else{
		m[x][y] = 'x';
		exibe(m);
	}
}
int completa(char m[3][3], char c){
	int linha, coluna;
	linha = 0;
	if(m[linha][0]&&m[linha][1] == c && m[linha][2]==' ') {m[linha][2] = 'o'; return 1;}
	if(m[linha][1]&&m[linha][2] == c && m[linha][0]==' ') {m[linha][0] = 'o'; return 1;}
	if(m[linha][2]&&m[linha][0] == c && m[linha][1]==' ') {m[linha][1] = 'o'; return 1;}
	linha++;
	if(m[linha][0]&&m[linha][1] == c && m[linha][2]==' ') {m[linha][2] = 'o'; return 1;}
	if(m[linha][1]&&m[linha][2] == c && m[linha][0]==' ') {m[linha][0] = 'o'; return 1;}
	if(m[linha][2]&&m[linha][0] == c && m[linha][1]==' ') {m[linha][1] = 'o'; return 1;}
	linha++;
	if(m[linha][0]&&m[linha][1] == c && m[linha][2]==' ') {m[linha][2] = 'o'; return 1;}
	if(m[linha][1]&&m[linha][2] == c && m[linha][0]==' ') {m[linha][0] = 'o'; return 1;}
	if(m[linha][2]&&m[linha][0] == c && m[linha][1]==' ') {m[linha][1] = 'o'; return 1;}

	coluna = 0;
	if(m[0][coluna]&&m[1][coluna] == c && m[2][coluna]==' ') {m[2][coluna] = 'o'; return 1;}
	if(m[1][coluna]&&m[2][coluna] == c && m[0][coluna]==' ') {m[0][coluna] = 'o'; return 1;}
	if(m[2][coluna]&&m[0][coluna] == c && m[1][coluna]==' ') {m[1][coluna] = 'o'; return 1;}
	coluna++;
	if(m[0][coluna]&&m[1][coluna] == c && m[2][coluna]==' ') {m[2][coluna] = 'o'; return 1;}
	if(m[1][coluna]&&m[2][coluna] == c && m[0][coluna]==' ') {m[0][coluna] = 'o'; return 1;}
	if(m[2][coluna]&&m[0][coluna] == c && m[1][coluna]==' ') {m[1][coluna] = 'o'; return 1;}
	coluna++;
	if(m[0][coluna]&&m[1][coluna] == c && m[2][coluna]==' ') {m[2][coluna] = 'o'; return 1;}
	if(m[1][coluna]&&m[2][coluna] == c && m[0][coluna]==' ') {m[0][coluna] = 'o'; return 1;}
	if(m[2][coluna]&&m[0][coluna] == c && m[1][coluna]==' ') {m[1][coluna] = 'o'; return 1;}

	if(m[0][0] && m[1][1] == c && m[2][2] == ' ') {m[2][2] = 'o'; return 1;}
	if(m[1][1] && m[2][2] == c && m[0][0] == ' ') {m[0][0] = 'o'; return 1;}
	if(m[2][2] && m[0][0] == c && m[1][1] == ' ') {m[1][1] = 'o'; return 1;}

	if(m[0][2] && m[1][1] == c && m[2][0] == ' ') {m[2][0] = 'o'; return 1;}
	if(m[1][1] && m[2][0] == c && m[0][2] == ' ') {m[0][2] = 'o'; return 1;}
	if(m[2][0] && m[0][2] == c && m[1][1] == ' ') {m[1][1] = 'o'; return 1;}
	return 0;
}
int c(char m[3][3]){
	srand(time(NULL));
	int x, y;
	x = rand()%3+1;
	y = rand()%3+1;
	if(completa(m,'o') == 0 && completa(m,'x') == 0){
		if(m[x][y] == ' ' && (x && y)<4){
			m[x-1][y-1] = 'o';
		}
		else{
			c(m);
		}
	}
}
int main(void) {
  	char m[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
	int j=0, e, s;
	char v;
	printf("Par (0) ou impar (1)?");
	scanf("%d", &e);
	srand(time(NULL));
	s = rand()%2;
	printf("Sorteado: %d\n", s);
	if(e==s) puts("Voce comeca!");
	else puts("Eu comeco!");
	printf("pressione enter...");
	_getch();
	do{
		exibe(m);
		if(e==s) usuario(m);
		else c(m);
		v = vencedor(m);
		s = !s;
	} while(++j<9 && v==' ');
	exibe(m);
	switch(v){
		case ' ': puts("\nEmpate!\n"); break;
		case 'x': puts("\nVoce venceu!\n"); break;
		case 'o': puts("\nEu venci!\n"); break;
	}
	return 0;
}
