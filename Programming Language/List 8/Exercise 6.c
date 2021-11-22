#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char v[10] = "Teste";
	_strupr(v);
	puts(v);
	
	return 0;
}
