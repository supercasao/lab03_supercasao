#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float kg, libras;
	
	printf("digite uma medida em quilogramas\n");
	scanf("%f", &kg);
	
	libras = kg /0.45;
	
	printf("esta medida em libras eh: %f \n", libras);
	
	system("pause");
	return 0;
}