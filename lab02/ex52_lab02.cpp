#include <stdio.h>
#include <stdlib.h>

int main(){
		
	float Apostador1, Apostador2, Apostador3, TotalApostado, Premio, Premio1, Premio2, Premio3;
	
	printf(" insira o premiio e quanto cada apostador investiu: \n");
	scanf("%f %f %f %f", &Premio, &Apostador1, &Apostador2, &Apostador3);
	
	TotalApostado = Apostador1 + Apostador2 + Apostador3;
	
	Premio1= (Premio/TotalApostado)*Apostador1;
	Premio2= (Premio/TotalApostado)*Apostador2;
	Premio3= (Premio/TotalApostado)*Apostador3;
	
	printf(" premio do apostador 1: %.2f\n premio do apostador 2: %.2f\n premio do apostador 2: %.2f \n", Premio1, Premio2, Premio3);
	
   system("pause");
   return 0;
}