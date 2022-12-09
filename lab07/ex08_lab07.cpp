#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char str[100];
	int contador, tamanhostring, espaco, letra, letra2;
	
	printf("insira uma frase:\n");
	fgets(str,100,stdin);
	
	printf("insira uma letra de origem e uma que a substituira:\n");
	scanf("%c %c", &letra, &letra2);
	
	tamanhostring = strlen(str);
	
	for(contador = 0; contador <= tamanhostring; contador++){
		if(str[contador] == letra){
			str[contador] = letra2;
		}
	}
	
	printf("%s \n", str);
	
	system("pause");
	return 0;
}
