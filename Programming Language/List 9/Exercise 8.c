#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct{
	float x; 
	float y;
}ponto;

float distancia(ponto a, ponto b){
	return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

float perimetro(ponto v[], int n){
	return distancia(v[0],v[1]) + distancia(v[1],v[2]) + distancia(v[2],v[3]) + distancia(v[3],v[0]);
}

int main() 
{
	ponto p[4] = {{0,2},{2,2},{2,0},{0,0}};
	printf("A distancia sera: %.1f\n", perimetro(p,4));
	return 0;
}
