#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float jardas, metros;
	
	printf("digite uma medida em metros\n");
	scanf("%f", &metros);
	
	jardas = metros / 0.91;
	
	printf("esta medida em jardas eh: %f \n", jardas);
	
	system("pause");
	return 0;
}