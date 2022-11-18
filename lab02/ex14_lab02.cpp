#include <stdio.h>
#include <stdlib.h>

int main(){
	
	const float pi = 3.141592;
	
	float rad, graus;
	
	printf("digite um angulo em graus\n");
	scanf("%f", &graus);
	
	rad =   graus * pi / 180 ;
	
	printf("este angulo em rad eh: %f \n", rad);
	
	system("pause");
	return 0;
}