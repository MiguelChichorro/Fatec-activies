#include <stdio.h>
#include <conio.h>

int main (void){
	int c;
	for (c=0; c<=15; c++){
		_textcolor(c);
	    printf("Cor %d\n",c);
	}
	return 0;
}
