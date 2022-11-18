#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int Contador = 1, Soma = 0, Vezes, Dado1, Dado2;

	printf("Insira quantas vezes quer jogar os dados: \n");
	scanf("%d", &Vezes);
	
	while (Contador <= Vezes){
		Contador = Contador + 1;
		
		Dado1 = 1 + ( rand() % 6 );
		Dado2 = 1 + ( rand() % 6 );
		
		if (Dado1 <= Dado2){
			printf("Dado 1 eh menor que o dado 2 \n");
		}else if (Dado1 >= Dado2){
			printf("Dado 1 eh maior que o dado 2 \n");
		}else if (Dado1 == Dado2){
			printf("Dado 1 eh igual ao dado 2 \n");
		}
	}
		
	printf("fim do programa \n");
	
	system("pause");
	return 0;
}