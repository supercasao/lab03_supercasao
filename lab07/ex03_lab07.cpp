#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char str[100];
	int contador, tamanhostring;
	
	printf("insira a palavra:\n");
	fgets(str,100,stdin);
	
	tamanhostring = strlen(str);
	
	for(contador = tamanhostring; contador >= 0; contador--){
		printf("%c", str[contador]);
	}
	printf("\n");
	
	system("pause");
	return 0;
}
