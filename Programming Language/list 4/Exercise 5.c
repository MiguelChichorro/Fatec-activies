#include<stdio.h>
#include<math.h>

int Passo02(float r, float x){
    if ((pow(r,2)-x)<0.001){
        printf("%f \n", r);
    }
    else{
        r = (pow(r,2)+x)/(2*r);
        Passo02 (r,x);
    }
}
int main (void) {
	float x, r;
	printf ("Valor de X ? \n");
	scanf ("%f", &x);
	r = x/2;
	Passo02(r,x);
	return 0;
}
