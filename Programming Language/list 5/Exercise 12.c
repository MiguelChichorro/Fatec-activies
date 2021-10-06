#include <stdio.h>

int main(void)
{
    int n, aux;
    printf("Numero? ");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
		aux = fibonacci(i+1);		
	printf("A n-esimo termo eh:%d\n", aux);
}
int fibonacci(int n)
{
   if(n==1 || n==2)
       return 1;
   else
       return fibonacci(n-1) + fibonacci(n-2);
}
