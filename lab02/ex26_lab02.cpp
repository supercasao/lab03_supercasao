#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float hectares, MetrosQuadrados;
	
	printf("digite uma medida em Metros quadrados\n");
	scanf("%f", &MetrosQuadrados);
	
	hectares = MetrosQuadrados * 0.0001;
	
	printf("esta medida em hectares eh: %f \n", hectares);
	
	system("pause");
	return 0;
}