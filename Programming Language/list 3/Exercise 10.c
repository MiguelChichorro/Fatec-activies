#include <stdio.h>
#include <conio.h>
#include <time.h>

int main(void){
	int x=1, y=1, dx=-1, dy=-1, cor = 1;
	do{
		_gotoxy(x,y);
		printf("O\b");
		_sleep(1);
		printf(".");
		if ( x==1 || x==80 ){
			dx = -dx;
			cor += 1;
	 		_textcolor(cor);
		}
		if ( y==1 || y==24 ){
			dy = -dy;
			cor += 1;
	 		_textcolor(cor);
		}
		x+= dx;
		y+= dy;
	} while ( !_kbhit() );
	return 0;
}
