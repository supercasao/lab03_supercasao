#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float Acres, MetrosQuadrados;
	
	printf("digite uma medida em MetrosQuadrados\n");
	scanf("%f", &MetrosQuadrados);
	
	Acres = MetrosQuadrados *0.000247;
	
	printf("esta medida em Acres eh: %f \n", Acres);
	
	system("pause");
	return 0;
}