#include <stdio.h>
#include <string.h>
#define TAM  80

void centraliza(char v[], int n)
{
    int tam = strlen(v),i=0,aux=0;
    char temp[TAM];
    
    strcpy(temp, v);
    aux=(n-tam)/2;
    aux = aux - 1;
        for(i=0; i< aux; i++)
        {
            v[i] = ' ';
        }
    strcat(v,temp);
    printf("%s", v);
}

int main(void)
{
	char v[]= "Apenas um teste";
    int n = 64;

    centraliza(v, n);
    return 0;
}
