#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char str[100];
	int contador, contador2 = 0, tamanhostring;
	
	printf("insira a string\n");
	fgets(str,100,stdin);
	
	tamanhostring = strlen(str);
	
	for(contador = 0; contador <= tamanhostring; contador++){
		if(str[contador] == '1'){
			contador2++;
		}
	}
	
	printf("A quantidade de 1's eh: %d \n", contador2);
	
	system("pause");
	return 0;
}
