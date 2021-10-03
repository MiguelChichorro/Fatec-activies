#include <stdio.h>
#include <conio.h>

int main(void){
	int tecla = 0;
	printf("TESTE\n");
	while(1){
    	if (_kbhit()){
      		tecla =_getch();
     		break;
    	}    
	}return 0;
}
