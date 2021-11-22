#include <stdio.h>
#include <ctype.h>
#include <math.h>
#define iguais(a,b,c) (a!=' ' && a==b && b==c )

void exibe(char m[3][3]);
int vencedor(char m[3][3]);
int vencedor(char m[3][3])
{
	for(int i = 0; i<3; i++)
	{if(iguais(m[i][0],m[i][1],m[i][2])) return m[i][0];
	 if(iguais(m[0][i], m[1][i], m[2][i])) return m[0][i];}

    if(iguais(m[0][0],m[1][1],m[2][2])) return m[0][0];
	if(iguais(m[0][2], m[1][1], m[2][0])) return m[0][2];
	return ' ';
}
int main()
{
	char m[3][3] = {{'X',' ', 'O'},{' ','X','O'},{' ',' ', 'X'}};
	exibe(m);
	printf("\nVencedor: %c\n\n", vencedor(m));
	return 0;
}
void exibe(char m[3][3] )
{
		for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++) {
	     	printf("%c | ", m[i][j]);
	     }
	     printf("\n");
	}
}
