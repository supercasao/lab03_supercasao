#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char str[100];
	int contador, tamanhostring, vogal;
	
	printf("insira a palavra em letras minusculas:\n");
	fgets(str,100,stdin);
	
	tamanhostring = strlen(str);
	
	for(contador = 0; contador <= tamanhostring; contador++){
		vogal = str[contador];
		if(vogal >= 97 && vogal <= 122){
			str[contador] -= 32;
		}
	}
	
	printf("%s", str);
	
	system("pause");
	return 0;
}
