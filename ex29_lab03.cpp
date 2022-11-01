#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int I, Acertos = 0;
	float A, B, Soma, Resposta;
	
	for(I = 0; I < 5; I++){
	 A = (rand() % 100) + 1;
	 B = (rand() % 100) + 1;
	 Soma = A + B;
	 Resposta = Soma;
	 printf("qual eh a soma de %.1f + %.1f ? \n",A, B);
	 scanf("%f",&Resposta);
	 if (Resposta != Soma)
	  printf("resposta errada. a resposta certa e:%.1f \n",Soma);
	 else
	 Acertos ++;
	}
	
	printf("voce acertou em: %d \n ",Acertos);
	
	system ("pause");
    return 0;
}