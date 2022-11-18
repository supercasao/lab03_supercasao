#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float Premio = 780000.00;
	float ganhador1, ganhador2, ganhador3;
	
	ganhador1 = Premio * 0.46;
	ganhador2 = Premio * 0.32;
	ganhador3 = Premio * 0.22;
	
	printf(" o premio do ganhador 1 eh: %.2f \n", ganhador1);
	printf(" o premio do ganhador 2 eh: %.2f \n", ganhador2);
	printf(" o premio do ganhador 3 eh: %.2f \n", ganhador3);	
	
	system("pause");
	return 0;
}