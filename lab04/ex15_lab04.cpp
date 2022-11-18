#include <stdio.h>
#include <stdlib.h>

int main(){

	int operacao, n1, n2;
	
	do{
		do{
			printf("inrira a operacao desejada: \n");
			printf(" (1) adicao \n (2) subtracao \n (3) multiplicacao \n (4) divisao \n (5) saida \n");
			scanf("%d", &operacao);
			printf("digite os numeros: \n");
			scanf("%d %d", &n1, &n2);
		}while(operacao >=1 && operacao <= 4);{
			switch(operacao){
				case 1:
				printf("a soma eh: %d \n", n1+n2);
				break;
				
				case 2:
				printf("a subtracao eh: %d \n", n1-n2);
				break;
					
				case 3:
				printf("a multiplicacao eh: %d \n", n1*n2);
				break;
				
				case 4:
				printf("a divisao eh: %d \n", n1/n2);
				break;
			}	
		}
	}while(operacao == 5);{
		printf("fim do programa \n");
	}
	system("pause");
	return 0;
}