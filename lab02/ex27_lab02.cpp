#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float hectares, MetrosQuadrados;
	
	printf("digite uma medida em hectares\n");
	scanf("%f", &hectares);
	
	MetrosQuadrados = hectares *10000;
	
	printf("esta medida em Metros quadrados eh: %f \n", MetrosQuadrados);
	
	system("pause");
	return 0;
}