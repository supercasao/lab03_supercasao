#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float Numero1, Numero2;
	int Operacao;
	
	printf("digite dois numeros: \n");
    scanf(" %f %f",&Numero1, &Numero2);

	printf("escolha a operacao desejada: (1)adicao (2)subtracao (3)multiplicacao (4)divisao \n");
	scanf("%d",&Operacao);
	
	switch (Operacao){
		case 1:
		printf("%.2f \n", Numero1 + Numero2);
		break;
		
		case 2:
		printf("%.2f \n", Numero1 - Numero2);
		break;
		
		case 3:
		printf("%.2f \n", Numero1 * Numero2);
		break;
		
		case 4:
		printf("%.2f \n", Numero1 / Numero2);
		break;
		
		default:
		printf("operacao nao identificada...\n");
	}
	
    system ("pause");
    return 0;
}