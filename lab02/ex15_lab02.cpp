#include <stdio.h>
#include <stdlib.h>

int main(){
	
	const float pi = 3.141592;
	
	float rad, graus;
	
	printf("digite um angulo em rad\n");
	scanf("%f", &rad);
	
	graus =   rad * 180 / pi ;
	
	printf("este angulo em graus eh: %f \n", graus);
	
	system("pause");
	return 0;
}