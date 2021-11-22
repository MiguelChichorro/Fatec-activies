#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 15

void exibir(char m[MAX][MAX]);
void gera(char m[MAX][MAX]);

int main(){
	char m[MAX][MAX];
	srand(time(NULL));
	gera(m);
	exibir(m);
	return 0;
}

void gera(char m[MAX][MAX]){

	for(int i = 0; i<15;i++){
		for(int j = 0; j<15;j++){
			if(i==1 && j==0){
				m[i][j] = 0;
			}
			else if(i==13 && j==14){
				m[i][j] = 0;
			}
			else if(i==0){
				m[i][j] = 1;
			}
			else if(i==14){
				m[i][j] = 1;
			}
			else if(j==0){
				m[i][j]= 1;
			}
			else if(j==14){
				m[i][j]= 1;
			}
			else if(j==13 && i==13){
				m[i][j]= 0;
			}
			else if(i==1 && j ==1){
				m[i][j]= 0;
			}
			else{
				m[i][j] = ((rand() % 100) < 75) ? 0 : 1;
			}
		}
	}
}

void exibir(char m[MAX][MAX]){
	for (int i = 0; i<15; i++){
		for (int j = 0; j<15; j++){
			printf("%s",m[i][j] ? "\xDB\xDB" : "  ");
		}
		puts("");
	}
}
