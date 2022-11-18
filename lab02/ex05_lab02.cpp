#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float x, QuintaParteX;
	
	printf("digite um valor real\n");
	scanf("%f", &x);
	
	QuintaParteX = x/5;
	
	printf("a quinta parte deste valor eh: %f \n", QuintaParteX);
	
	system("pause");
	return 0;
}