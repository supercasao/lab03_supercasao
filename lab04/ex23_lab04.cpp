#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int contador, galhos, contador2;
	int numero = 1;
	
	printf("Insira quantos galhos voce deseja: \n");
	scanf("%d", &galhos);
	
	for(contador = 1; contador <= galhos; contador++){
		for(contador2 = 1; contador2 <= contador; contador2++){
			printf(" %d ", numero);
			numero +=1;
		}
		contador2 = 1;
		printf("\n");
	}
		
	printf("fim do programa \n");
	
	system("pause");
	return 0;
}