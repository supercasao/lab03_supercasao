#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char str[100];
	
	printf("insira a frase desejada\n");
	fgets(str,100,stdin);
	
	printf("a frase eh: %s", str);
	
	system("pause");
	return 0;
}
