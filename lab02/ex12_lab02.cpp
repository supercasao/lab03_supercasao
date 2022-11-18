#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float km, milhas;
	
	printf("digite uma distancia em milhas\n");
	scanf("%f", &milhas);
	
	km =   milhas * 1.61 ;
	
	printf("esta distancia em km eh: %f \n", km);
	
	system("pause");
	return 0;
}