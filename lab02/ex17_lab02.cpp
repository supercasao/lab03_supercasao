#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float polegadas, centimetros;
	
	printf("digite uma medida em centimetros\n");
	scanf("%f", &centimetros);
	
	polegadas = centimetros /2.54;
	
	printf("esta medida em polegadas eh: %f \n", polegadas);
	
	system("pause");
	return 0;
}