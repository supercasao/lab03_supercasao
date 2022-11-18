#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float KmH, MtS;
	
	printf("digite uma velocidade em Km por hora\n");
	scanf("%f", &KmH);
	
	MtS =   KmH / 3.6;
	
	printf("esta velocidade em metros por segundo eh: %f \n", MtS);
	
	system("pause");
	return 0;
}