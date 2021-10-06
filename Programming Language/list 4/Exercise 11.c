#include <stdio.h>
#include <conio.h>
#include <time.h>

void sequencia(void){
	static int n=0;
	printf("%d,", n++);	
}
int main (void){
	while ( !_kbhit() ){
		sequencia();
		_sleep(1);
	}
	return 0;
}
