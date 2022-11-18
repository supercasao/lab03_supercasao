#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float polegadas, centimetros;
	
	printf("digite uma medida em polegadas\n");
	scanf("%f", &polegadas);
	
	centimetros = polegadas *2.54;
	
	printf("esta medida em centimetros eh: %f \n", centimetros);
	
	system("pause");
	return 0;
}