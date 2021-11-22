#include <stdio.h>
#include <string.h>

int main()
{
	char s[513];
	printf("Senha? \n");
	gets(s);
	if( _stricmp(s,"Abracadabra")== 0) puts("Senha correta!");
	else puts("Senha Incorreta!");
	return 0;
}
