#include <stdio.h>
#include <stdlib.h>

int main(){

	unsigned numero_inteiro_positivo;
	int primeiro_numero,segundo_numero,terceiro_numero,terceiro_numero_2,segundo_numero_2, numero_invertido;
	
	printf("Digite um numero positivo de tres digitos: ");
	scanf("%u",&numero_inteiro_positivo);
	
	primeiro_numero = numero_inteiro_positivo / 100;
	segundo_numero = (numero_inteiro_positivo / 10) - (primeiro_numero * 10);
	terceiro_numero = numero_inteiro_positivo - (primeiro_numero * 100) -  (segundo_numero * 10);
	
	terceiro_numero_2 = terceiro_numero * 100;
	segundo_numero_2 = segundo_numero * 10;
	numero_invertido = terceiro_numero_2 + segundo_numero_2 + primeiro_numero;
	
	printf("\no numero invertido e: %d\n",numero_invertido);


	system("pause");
	return 0;

}