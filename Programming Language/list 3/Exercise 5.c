#include <stdio.h>
#include <math.h>

int main(void){
	int n, fat;
	printf("Fatorial do numero: ");
	scanf("%d", &n);
	for(fat = 1; n > 1; n = n - 1)
		fat = fat * n;
	printf("Fatorial: %d\n", fat);
    return 0;
}
