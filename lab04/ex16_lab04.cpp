#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num1, num2, opcao;
	
	do{
		do{
			printf("Insira os numeros \n");
			scanf("%d %d", &num1, &num2);
			
			printf("Escolha a opcao de operacao \n");
			printf(" (1) Adicao \n (2) Subtracao \n (3) multipliacacao \n (4) divisao \n (0) saida \n");
			scanf("%d", &opcao);
		}while(opcao == 0);
			switch(opcao){
			case 1:
			printf("resultado da adicao eh: %d \n\n\n", num1+num2);
			break;
			
			case 2:
			printf("resultado da subtracao eh: %d \n\n\n", num1-num2);
			break;
			
			case 3:
			printf("resultado da multiplicacao eh: %d \n\n\n", num1+num2);
			break;
			
			case 4:
			printf("resultado da divisao eh: %.2f \n\n\n", num1/num2);
			break;
			}
	}while(opcao != 0);
		printf("fim do programa \n");
		
	system("pause");
	return 0;
}