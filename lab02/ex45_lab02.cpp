#include <stdio.h>
#include <stdlib.h>

int main(){

   char caracter;
	printf("digite o caractere desejado");
    scanf("%c", &caracter);

    int primeiro_maisculo = 'A';
    int primeiro_minusculo = 'a';
    int diferenca = primeiro_minusculo - primeiro_maisculo;

    printf("%c", caracter + diferenca);

 	system("pause");
	return 0;
}