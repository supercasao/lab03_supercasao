#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float Numero1, Numero2;
	int Operacao;
	
	printf("digite dois numeros: \n");
    scanf(" %f %f",&Numero1, &Numero2);

	printf("escolha a operacao desejada: (1)adicao (2)subtracao (3)multiplicacao (4)divisao \n");
	scanf("%d",&Operacao);

	if(Operacao == 1){
		printf("a soma dos numeros eh: %.2f \n", Numero1 + Numero2);
	}
	else if(Operacao == 2){
		if(Numero1 > Numero2){
			printf("a diferenca dos numeros eh: %.2f \n", Numero1 - Numero2);
		}else
			printf("a diferenca dos numeros eh: %.2f \n", Numero2 - Numero1);
	}
	else if(Operacao == 3){
		printf("o produto dos numeros eh: %.2f \n", Numero1 * Numero2);
	}
	else if(Operacao == 4){
		if(Numero1 != 0 &&){
			printf("a divisao dos numeros eh: %.2f \n", Numero2 / Numero1);
		}else if(Numero2 != 0)
			printf("a divisao dos numeros eh: %.2f \n", Numero1 / Numero2);
	}
	else{
		printf("Operacao invalida...\n");
	}
	
    system ("pause");
    return 0;
}