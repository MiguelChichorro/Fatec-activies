#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	int lin = 12, col = 40, cor = 1, cor2 = 1;
	while(1){
		_gotoxy(col, lin);
		_putch(219);
		switch(toupper(_getch()) ){
			case 'W': if( lin>1) lin--; break;
			case 'S': if( lin<24) lin++; break;
			case 'D': if( col<80) col++; break;
			case 'A': if( col>1) col--; break;
			case 'C': cor = cor + 1;
					  _textcolor(cor); break;
			case 'R':
				if(cor2 != 0){
					cor2 = 0;	
					_textcolor(cor2);
				}
				else if(cor2 == 0){
					cor2 = cor;
					_textcolor(cor2);
				}
				break;
			case 'F': exit(1);
		}
	}return 0;
}
