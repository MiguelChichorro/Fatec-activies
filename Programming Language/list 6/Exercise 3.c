#include <stdio.h>
#include <conio.h>

void histograma(float v[], float m){
	int aux=0;
	char d[7] = {'D','S','T','Q','Q','S','S'};
	for (int i=0;i<7;i++){
		_textcolor(15);
		printf("%c: ",d[i]);
		aux = v[i];
		if(v[i]>m){
			for(int j=1;j<=aux;j++){
				_textcolor(4);
				_putch(220);
			}
		}
		if(v[i]<m){
			for(int k=1;k<=aux;k++){
				_textcolor(1);
				_putch(220);
			}
		}
		if(v[i]==m){
			for(int l=1;l<=aux;l++){
				_textcolor(2);
				_putch(220);
			}
		}
		printf("\n");
	}
	printf("\n");
	_textcolor(15);
}

float media(float v[]){
	float soma=0, media=0;
	for (int i=0;i<7;i++)
		soma += v[i];
	media = soma/7;
	return media;
}

float preenche(float v[]){
	for (int i=0;i<7;i++){
		printf("%da Temperatura? ", i+1);
		scanf("%f", &v[i]);
	}
	printf("\n");
}

int main(void){
	float v[7];
	preenche(v);
	histograma(v,media(v));
	return 0;
}
