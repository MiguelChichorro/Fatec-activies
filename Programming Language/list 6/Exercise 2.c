#include <stdio.h>

int conta(float v[],float m){
	int cont = 0;
	for (int i=0;i<7;i++){
		if(v[i] > m)
			cont += 1;
	}
	return cont;
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
}

int main(void){
	float v[7];
	preenche(v);
	float m = media(v);
	printf("Media: %.1f %cC\n", m, 248);
	printf("Dias acima da media: %d\n", conta(v,m));
	return 0;
}
