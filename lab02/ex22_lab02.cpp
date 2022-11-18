#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float jardas, metros;
	
	printf("digite uma medida em jardas\n");
	scanf("%f", &jardas);
	
	metros = jardas * 0.91;
	
	printf("esta medida em metros eh: %f \n", metros);
	
	system("pause");
	return 0;
}