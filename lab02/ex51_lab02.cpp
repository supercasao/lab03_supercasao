#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
		
	int X, Y;
	float DistanciaOrigem;
	
	printf(" digite as coordenadas x e y do ponto: \n");
	scanf("%d %d", &X, &Y);
	
	DistanciaOrigem = sqrt(pow(X,2) + pow(Y,2));
	
	printf("a distancia do ponto ate a origem eh: %.2f", DistanciaOrigem);
	
   system("pause");
   return 0;
}