#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float AlturaDegraus, AlturaDesejada;
	
	printf("qual a altura dos degraus e a altura desejada subir?\n ");
	scanf("%f %f", &AlturaDegraus, &AlturaDesejada);
	
	printf(" a quantidade de degraus eh: %.0f\n", AlturaDesejada / AlturaDegraus);
		
	system("pause");
	return 0;
}