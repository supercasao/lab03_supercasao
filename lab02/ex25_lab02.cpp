#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float Acres, MetrosQuadrados;
	
	printf("digite uma medida em Acres\n");
	scanf("%f", &Acres);
	
	MetrosQuadrados = Acres * 4048.58;
	
	printf("esta medida em MetrosQuadrados eh: %f \n", MetrosQuadrados);
	
	system("pause");
	return 0;
}