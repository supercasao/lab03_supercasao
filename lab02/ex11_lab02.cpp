#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float KmH, MtS;
	
	printf("digite uma velocidade em metros por segundo\n");
	scanf("%f", &MtS);
	
	KmH =   MtS * 3.6;
	
	printf("esta velocidade em km por hora eh: %f \n", KmH);
	
	system("pause");
	return 0;
}