#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char str[100];
	int contador, tamanhostring, contador2 =0;
	
	printf("insira a palavra:\n");
	fgets(str,100,stdin);
	
	tamanhostring = strlen(str);
	
	for(contador = 0; contador <= tamanhostring; contador++){
		if(str[contador] == 'a' || str[contador] == 'e' || 
		   str[contador] == 'i' || str[contador] == 'o' || 
		   str[contador] == 'u' || str[contador] == 'A' || 
		   str[contador] == 'E' || str[contador] == 'I' || 
		   str[contador] == 'O' || str[contador] == 'U' ){
			contador2++;
			str[contador] = 'x';
		}
	}
	
	printf("a quantidade de vogais eh: %d \n", contador2);
	printf("%s", str);
	
	system("pause");
	return 0;
}
