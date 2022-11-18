#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int Numero, soma=0;
	
	printf("Digite um numero:");
    scanf("%d",&Numero);

    if(Numero > 0){
        while(Numero > 0){
        soma = soma + Numero % 10;
        Numero = Numero / 10;
        }
        printf("A soma dos algarismos eh: %d \n",soma);
	}
	else{
        printf("O numero eh invalido \n");
    }

    system ("pause");
    return 0;
}