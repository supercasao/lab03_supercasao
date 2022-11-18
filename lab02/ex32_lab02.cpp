#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x, SucessorDoTriplo, AntecessorDoDobro;
	
	printf("digite o valor desejado:...");
	scanf("%d", &x);
	
	SucessorDoTriplo = 3*x + 1;
	AntecessorDoDobro = 2*x - 1;
	
	printf("a soma do sucessor de seu triplo com o antecessor de seu dobro eh: %d \n",SucessorDoTriplo + AntecessorDoDobro);
	
	system("pause");
	return 0;
}