#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char str[100];
	int contador, tamanhostring, espaco;
	
	printf("insira uma frase:\n");
	fgets(str,100,stdin);
	
	tamanhostring = strlen(str);
	
	for(contador = 0; contador <= tamanhostring; contador++){
		espaco = str[contador];
		if(espaco == 32){
			str[contador] = 127;
		}
	}
	
	printf("%s \n", str);
	
	system("pause");
	return 0;
}
